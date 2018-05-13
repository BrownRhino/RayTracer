//-------------------------------------------------------------------------------------------
//   Painting with Flowsnakes
// fsnake program modified to use open gl vertex arrays  Brian Wyvill October 2012
// added save/restore and postscript driver November 2012
// fixed memory management November 2012 delete works properly now.
// added progress bar to show memory usage.
//-------------------------------------------------------------------------------------------

#include "glwidget.h"


GLWidget::GLWidget(QWidget *parent)
    : QGLWidget(parent)
{
    //QVector3D temp( (renderWidth / 2)-300, (renderHeight /2), 350);
    QVector3D temp(49,300,50);
    lightposn = temp;
}

GLWidget::~GLWidget()
{    

}

void GLWidget::clear()
{
    updateGL();
}

void GLWidget::initializeGL()
{
    //Background color will be white
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glShadeModel( GL_FLAT );
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glPointSize(5);
}

void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    displayImage();
}

/* 2D */
void GLWidget::resizeGL( int w, int h )
{
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glOrtho(0.0,GLdouble(w),0,GLdouble(h),-10.0,10.0);
    glFlush();
    glMatrixMode(GL_MODELVIEW);
    glViewport( 0, 0, (GLint)w, (GLint)h );
    cerr << "gl new size "<< w SEP h NL;
    renderWidth = w;
    renderHeight = h;
}

// no mouse events in this demo
void GLWidget::mousePressEvent( QMouseEvent * )
{
}

void GLWidget::mouseReleaseEvent( QMouseEvent *)
{
}

void GLWidget::mouseMoveEvent ( QMouseEvent * )
{
}

// wheel event
void GLWidget::wheelEvent(QWheelEvent *)
{
}

void GLWidget::openImage(QString fileBuf)
{     
    QImage myImage;
    myImage.load(fileBuf);
    prepareImageDisplay(&myImage);
}

void GLWidget::prepareImageDisplay(QImage* myimage)
{   
    glimage = QGLWidget::convertToGLFormat( *myimage );  // flipped 32bit RGBA stored as mi
    updateGL();
}

void GLWidget::displayImage()
{
    if (glimage.width()==0) {
        cerr << "Null Image\n";
        return;
    } else {
        glRasterPos2i(0,0);
        glDrawPixels(glimage.width(), glimage.height(), GL_RGBA, GL_UNSIGNED_BYTE, glimage.bits());
        glFlush();
    }
}

void GLWidget::saveImage( QString fileBuf )
{
    // there is no conversion  back toQImage
    // hence the need to keep qtimage as well as glimage
    qtimage.save ( fileBuf );   // note it is the qtimage in the right format for saving
}

void GLWidget::makeImage( )
{   

    QImage myimage(renderWidth, renderHeight, QImage::Format_RGB32);  //Creates an image width height in that format

    qDebug()<<"renderWidth is "<<renderWidth;
    qDebug()<<"renderHeight is "<<renderHeight;

    qDebug()<<"renderWidth/2 is "<<renderWidth/2;
    qDebug()<<"renderHeight/2 is "<<renderHeight/2;
    qDebug()<<"NOTHING WORKS";


    QVector3D CameraPoint(renderWidth / 2, renderHeight / 2, -1000);//define camera point.  aligned to center of image plane, offset one unit on z axis.  est. camera point at width/2 and height/2

    //We're going to ray-trace a circle at a positive Z location //parallel to the image plane.



    QVector3D Origin = CameraPoint;//origin point for ray

    QVector3D circleCenter( renderWidth / 2, renderHeight /2, 50);//define circle center, circle aigned with center of image plane but in positive z direction by 10
//    double CircleRadius = 900;//define circle radius


    Ray r;
    r.setOrigin(Origin);

    double sx = (renderWidth/2)+100;
    double sy = (renderHeight/2);

    qDebug()<<"sx is "<<sx;
    qDebug()<<"sy is "<<sy;


    //Set our scene and the properties of the sphere in our scene
    double sphereRadius = 50;
    Scene s;

    //Set our sphere below
    QVector3D sphereCenter(436, 234, 500.0);
    QVector3D ambTerm(1.0,0.0,0.0);
    QVector3D lamTerm(1.0,0.0,0.0);
    QVector3D specTerm(0.9, 0.9, 0.9);

    double pTerm = 100.0;


    QVector3D lightintensity(1.0,1.0,1.0);  //Set the light intensity (colour)

    s.setScene(sphereCenter, sphereRadius, ambTerm, lamTerm, specTerm, pTerm, lightposn, lightintensity);  //Set our scene with all of the information about sphere we created an our light source


    for (int i = 0; i < renderWidth; ++ i)//prepare every pixel using nested loops.  go through all pixels on image plane.  Use nested for loop and shoot a ray from camera through every pixel on image plane to object space
        for (int j = 0; j < renderHeight; ++ j)
        {
            //Construct a ray


            QVector3D ImagePlanePosition((double)i, (double)j, 20.0);//pixel position for image plane in space.  x = i, y = j, and z = 0

            r.setDirection(ImagePlanePosition); //Set the direction for what pixel we wan our ray to shoot through





/*****************************OLD CODE BELOW**************************************************/
            QVector3D col(0,0,0);   //Set the colour to (0,0,0) (done for anti aliasing)
//            col += s.shade(r);  //Shoot the ray through a pixel and return the colour (placed in col).
/*********************************************************************************************/
/*ANTI ALIASING CODE BELOW*/
            for(double outer = 0.0; outer<1.3; outer+=0.5)
                for(double inner = 0.0; inner<1.3; inner+=0.5)
                {
                    ImagePlanePosition.setX((double)i + (double)outer);
                    ImagePlanePosition.setY((double)j + (double)inner);
                    ImagePlanePosition.setZ(20.0);
                    r.setDirection(ImagePlanePosition);
                    col += s.shade(r);
                }
            col /= 9.0;




            //Now we have a ray: R = O + t D  //Our sphere is at (436, 234, 500.0)
            //Solve for t at its intersection with the sphere

            QVector3D Z10Position = r.calcPoint(11.0);

            //See if the position is inside the circle black

            QVector3D DistanceToCenter = Z10Position - circleCenter;//Distance from position point to center of circle

            double length = DistanceToCenter.length();//find length of that distance


            //Multiply each colour (which is between 0 and 1) by 255
            double r =col.x()*255.0;
            double g =col.y()*255.0;
            double b =col.z()*255.0;

            //If any colour is >255 set it to 255.
            if(r>255)
                r=255.0;
            if(g>255)
                g=255.0;
            if(b>255.0)
                b=255.0;

            //Draw our pixel
            myimage.setPixel(i, j, qRgb(r, g, b));
        }

    qtimage=myimage.copy(0, 0,  myimage.width(), myimage.height());

    prepareImageDisplay(&myimage);
}

void GLWidget::about()
{
    QString vnum;
    QString mess, notes;
    QString title="Images in Qt and Opengl ";

    vnum.setNum ( MYVERSION );
    mess="Qt OpenGl image demo Release Version: ";
    mess = mess+vnum;
    notes = "\n\n News: Every QImage is now on stack, there is no way for memory leak. -- Lucky";
    mess = mess+notes;
    QMessageBox::information( this, title, mess, QMessageBox::Ok );
}

void GLWidget::help()
{
    QString vnum;
    QString mess, notes;
    QString title="qtglimages";

    vnum.setNum ( MYVERSION);
    mess="Simple Image Handling in Qt/Opengl by Brian Wyvill Release Version: ";
    mess = mess+vnum;
    notes = "\n\n Save and Load images for display.  Also Make an image such as output from a ray tracer. ";
    mess = mess+notes;
    QMessageBox::information( this, title, mess, QMessageBox::Ok );
}

