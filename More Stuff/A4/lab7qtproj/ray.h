#ifndef RAY_H
#define RAY_H

#include <QVector3D>
#include<QDebug>


//Ray class representing the ray we shoot into our image to get a colour
class Ray
{
    private:
        QVector3D Origin;//The origin of our ray
        QVector3D Direction;//The direction our ray is heading in
        double t;   //t can be thought of as time and tells us the point a ray is at
    public:
        QVector3D getOrigin() const{return Origin;}//Returns the Origin of a ray

        QVector3D getDirection() const{return Direction;}   //Returns the direction of a ray

        double gett(){return t;}    //returns the particular time a ray is set to (may not be set)

        void setOrigin(const QVector3D &a) {Origin = a;}    //sets the origin member variable of a ray

        void setDirection(const QVector3D &ImagePlanePosition) {Direction = ImagePlanePosition - Origin;   Direction.normalize();} //sets the normalized direction of a ray

        void sett(double val){t = val;} //sets the time value of a ray


        //Returns the point a ray is at using a time value member var
        QVector3D point()
        {
            QVector3D value = (Origin + (t * Direction) );
            return value;
        }

        //Returns the point a ray is at given a time value passed in as a parameter
        QVector3D calcPoint(double t)
        {
            QVector3D temp = Direction * t;
            temp = Origin + temp;
            return temp;
        }

        //Prints information about a ray (its origin and direction member variables)
        void printRay()
        {
            qDebug() << "\n"<< Origin;
            qDebug() << Direction<<"\n";
        }

};

#endif // RAY_H
