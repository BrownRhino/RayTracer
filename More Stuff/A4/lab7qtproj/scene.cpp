#include "scene.h"

Scene::Scene()
{
    //Ambient light for the scene is set in the next two lines below
    QVector3D temp(0.1, 0.1, 0.1);
    Amb = temp;

    //Set the values for a plane that's never used (p1) below
    QVector3D N(0,0,-1);
    QVector3D Q(0,0,600.0);
    QVector3D kLam1(0.0, 0.0, 1.0);
    QVector3D ambTerm1(0.0, 0.0, 1.0);
    QVector3D specTerm1(0.4, 0.4, 0.4);
    double pa=10.0;

    p1.setPlane(N,Q);
    p1.setkLam(kLam1);
    p1.setkAmb(ambTerm1);
    p1.setkSpec(specTerm1);
    p1.setp(pa);
    p1.setid(2);


    //Below we set the values for the first triangle that we will render into our scene composing the room
    QVector3D t11one(25,350,50);
    QVector3D t11two(600,350,50);
    QVector3D t11three(25,350,600);
    QVector3D kLamt11(0.0, 1.0, 0.0);
    QVector3D ambTermt11(0.0, 1.0, 0.0);
    QVector3D specTermt11(0.4, 0.4, 0.4);
    double pt11=1000.0;
    t11.setTri(t11one, t11two, t11three);
    t11.setkAmb(ambTermt11);
    t11.setkLam(kLamt11);
    t11.setkSpec(specTermt11);
    t11.setp(pt11);
    t11.setid(3);


    //Below we set the values for the second triangle that we will render into our scene composing the room
    QVector3D t12one(600,350,600);
    QVector3D t12two(25,350,600);
    QVector3D t12three(600,350,50);
    t12.setTri(t12one, t12two, t12three);
    t12.setkAmb(ambTermt11);
    t12.setkLam(kLamt11);
    t12.setkSpec(specTermt11);
    t12.setp(pt11);
    t12.setid(4);




    //Below we set the values for the third triangle that we will render into our scene composing the room
    QVector3D t21one(25,350,600);
    QVector3D t21two(600,350,600);
    QVector3D t21three(25,10,600);

    QVector3D kLamt21(0.5, 0.5, 0.5);
    QVector3D ambTermt21(0.5, 0.5, 0.5);
    QVector3D specTermt21(0.4, 0.4, 0.4);
    double pt21=1000.0;

    t21.setTri(t21one, t21two, t21three);
    t21.setkAmb(ambTermt21);
    t21.setkLam(kLamt21);
    t21.setkSpec(specTermt21);
    t21.setp(pt21);
    t21.setid(5);


    //Below we set the values for the fourth triangle that we will render into our scene composing the room
    QVector3D t22one(600,10,600);
    QVector3D t22two(25,10,600);
    QVector3D t22three(600,350,600);

    t22.setTri(t22one, t22two, t22three);
    t22.setkAmb(ambTermt21);
    t22.setkLam(kLamt21);
    t22.setkSpec(specTermt21);
    t22.setp(pt21);
    t22.setid(6);


    //Below we set the values for the fifth triangle that we will render into our scene composing the room
    QVector3D t31one(25,350,600);
    QVector3D t31two(25,10,600);
    QVector3D t31three(25,350,50);

    QVector3D kLamt31(1.0, 0.0, 0.0);
    QVector3D ambTermt31(1.0, 0.0, 0.0);
    QVector3D specTermt31(0.4, 0.4, 0.4);
    double pt31=100.0;

    t31.setTri(t31one, t31two, t31three);
    t31.setkAmb(ambTermt31);
    t31.setkLam(kLamt31);
    t31.setkSpec(specTermt31);
    t31.setp(pt31);
    t31.setid(7);

    //Below we set the values for the sixth triangle that we will render into our scene composing the room
    QVector3D t32one(25,10,50);
    QVector3D t32two(25,350,50);
    QVector3D t32three(25,10,600);

    t32.setTri(t32one, t32two, t32three);
    t32.setkAmb(ambTermt31);
    t32.setkLam(kLamt31);
    t32.setkSpec(specTermt31);
    t32.setp(pt31);
    t32.setid(8);

    //Below we set the values for the seventh triangle that we will render into our scene composing the room
    QVector3D t41one(600,350,600);
    QVector3D t41two(600,350,50);
    QVector3D t41three(600,10,600);

    QVector3D kLamt41(0.0, 0.0, 1.0);
    QVector3D ambTermt41(0.0, 0.0, 1.0);
    QVector3D specTermt41(0.4, 0.4, 0.4);
    double pt41=100.0;

    t41.setTri(t41one, t41two, t41three);
    t41.setkAmb(ambTermt41);
    t41.setkLam(kLamt41);
    t41.setkSpec(specTermt41);
    t41.setp(pt41);
    t41.setid(9);

    //Below we set the values for the eighth triangle that we will render into our scene composing the room
    QVector3D t42one(600,10,50);
    QVector3D t42two(600,10,600);
    QVector3D t42three(600,350,50);

    t42.setTri(t42one, t42two, t42three);
    t42.setkAmb(ambTermt41);
    t42.setkLam(kLamt41);
    t42.setkSpec(specTermt41);
    t42.setp(pt41);
    t42.setid(10);


    //Below we set the values for the ninth triangle that we will render into our scene composing the room
    QVector3D t51one(25,10,50);
    QVector3D t51two(25,10,600);
    QVector3D t51three(600,10,50);

    QVector3D kLamt51(1.0, 1.0, 0.0);
    QVector3D ambTermt51(1.0, 1.0, 0.0);
    QVector3D specTermt51(0.4, 0.4, 0.4);
    double pt51=100.0;

    t51.setTri(t51one, t51two, t51three);
    t51.setkAmb(ambTermt51);
    t51.setkLam(kLamt51);
    t51.setkSpec(specTermt51);
    t51.setp(pt51);
    t51.setid(11);

    //Below we set the values for the tenth triangle that we will render into our scene composing the room
    QVector3D t52one(600,10,600);
    QVector3D t52two(600,10,50);
    QVector3D t52three(25,10,600);

    t52.setTri(t52one, t52two, t52three);
    t52.setkAmb(ambTermt51);
    t52.setkLam(kLamt51);
    t52.setkSpec(specTermt51);
    t52.setp(pt51);
    t52.setid(12);

    //Below we set the values for the first triangle that will be used to compose the pyramid in the room
    QVector3D pyr1one(25,350,100);
    QVector3D pyr1two(25,350,50);
    QVector3D pyr1three(50,300,75);

    //The material values for all triangles in our pyramid are set in the 4 lines below
    QVector3D kLampyr(1.0, 0.4, 0.0);
    QVector3D ambTermpyr(1.0, 0.4, 0.0);
    QVector3D specTermpyr(0.4, 0.4, 0.4);
    double ppyr=100.0;

    pyr1.setTri(pyr1one, pyr1two, pyr1three);
    pyr1.setkAmb(ambTermpyr);
    pyr1.setkLam(kLampyr);
    pyr1.setkSpec(specTermpyr);
    pyr1.setp(ppyr);
    pyr1.setid(13);


    //Below we set the values for the second triangle that will be used to compose the pyramid in the room
    QVector3D pyr2one(75,350,50);
    QVector3D pyr2two(75,350,100);
    QVector3D pyr2three(50,300,75);

    pyr2.setTri(pyr2one, pyr2two, pyr2three);
    pyr2.setkAmb(ambTermpyr);
    pyr2.setkLam(kLampyr);
    pyr2.setkSpec(specTermpyr);
    pyr2.setp(ppyr);
    pyr2.setid(14);

    //Below we set the values for the third triangle that will be used to compose the pyramid in the room
    QVector3D pyr3one(25,350,100);
    QVector3D pyr3two(75,350,100);
    QVector3D pyr3three(50,300,75);

    pyr3.setTri(pyr3one, pyr3two, pyr3three);
    pyr3.setkAmb(ambTermpyr);
    pyr3.setkLam(kLampyr);
    pyr3.setkSpec(specTermpyr);
    pyr3.setp(ppyr);
    pyr3.setid(15);

    //Below we set the values for the four triangle that will be used to compose the pyramid in the room
    QVector3D pyr4one(75,350,50);
    QVector3D pyr4two(50,300,75);
    QVector3D pyr4three(25,350,50);

    pyr4.setTri(pyr4one, pyr4two, pyr4three);
    pyr4.setkAmb(ambTermpyr);
    pyr4.setkLam(kLampyr);
    pyr4.setkSpec(specTermpyr);
    pyr4.setp(ppyr);
    pyr4.setid(16);

}




//setScene sets the sphere and lighting specified by the user using arguements
void Scene::setScene(QVector3D sph, double rad, QVector3D kam, QVector3D klam, QVector3D kspec, double pv, QVector3D ls1Posn, QVector3D ls1Inten)//UPDATED
{
    //Set the position and material values for the sphere in the next 6 stmts below
    s.setSphere(sph.x(), sph.y(), sph.z(), rad);


    s.setkAmb(kam);

    s.setkLam(klam);

    s.setkSpec(kspec);

    s.setp(pv);
    s.setid(1);

    L1.setLight(ls1Posn, ls1Inten); //Set the light position and intensity four our scene


    //Sphere used to help detect shadows is set below
    ls.setSphere(ls1Posn.x(), ls1Posn.y(), ls1Posn.z(), 3);
    ls.setid(0);
    /////////////////////////////////////////////////////////




}

//ambComponent:  Used to multiply the corresponding components of a vector together, store the result in a vector, and return the result.  Since this is the only function needed to calculate the ambient component
//in the Blinn Phong equation, we name this function ambComponent.
QVector3D Scene::ambComponent(const QVector3D &a, const QVector3D &b)
{
    double c1 = a.x() * b.x();
    double c2 = a.y() * b.y();
    double c3 = a.z() * b.z();
    QVector3D result(c1,c2,c3);
    return result;
}


//lambComponent: This function calculates the lambertian component of an object using the blinn phong model and return the resulting red, blue, and green components in a vector.
QVector3D Scene::lambComponent(const QVector3D &kdi, const QVector3D &inten, Intersection &buzz)
{

    QVector3D temp;
    temp = ambComponent(kdi, inten);    //Multiply the diffuse component of an object by the light intensity.
    HitStuff chosen = buzz.getHit(0);   //Get the fastest hit record for the object we want to calculate the lambertian component for.



    QVector3D norm = chosen.gethitNormal(); //Normal of the place on the objects surface that was hit
    QVector3D pt = chosen.gethitPoint();    //Point on the object that was hit
    QVector3D lpos = L1.getPosition();  //The position of the light source in our scene
    QVector3D ldir = lpos - pt;         //The vector from the hit point to the light source (normalized in line below)
    ldir.normalize();


    //get the dot product of the normal and the vector pointing to the light from the hit point.  If this value is below 0, set it to 0.
    double nl = QVector3D::dotProduct(norm, ldir);
    if(nl < 0){nl=0;}


    //Multiply each value in the rest of the lambertian equation by the max(0, dot product(norm, ldir) to get the lambertian component for the blinn phong equation
    temp*=nl;
    return temp;
}



//lambComponent: This function calculates the specular component of an object using the blinn phong model and return the resulting red, blue, and green components in a vector.
QVector3D Scene::specComponent(const QVector3D &spc, const QVector3D &inten, const Ray& ray,  Intersection &buzz, double pval)
{


    QVector3D temp;
    temp = ambComponent(spc, inten);    //Multiply the specular component of an object by the light intensity.
    HitStuff chosen = buzz.getHit(0);   //Get the fastest hit record for the object we want to calculate the specular component for.


    QVector3D end = ray.getOrigin();    //Get the origin of a ray
    QVector3D pt  = chosen.gethitPoint();   //Get the point on the object the ray hit
    QVector3D viw = end - pt;   //Find the vector from the hit point to the origin and normalize it
    viw.normalize();


    QVector3D lpos = L1.getPosition();  //Find out where the light source is located in our scene
    QVector3D ldir = lpos - pt; //Find the vector starting from the hit point to where the light is in our scene.  Normalize the result
    ldir.normalize();


    QVector3D half = viw + ldir;    //Find the vector located halfway between the viw and ldir vectors and normalize it
    half.normalize();


    QVector3D norm = chosen.gethitNormal(); //Get the normal vector from the point on the opject you hit

    //Calculate the dot product between the half vector and the normal vector and store it in variable sheen.  If the result is less than 0, set the corresponding variable sheen to 0
    double sheen = QVector3D::dotProduct(norm, half);
    if(sheen < 0.0){sheen=0.0;}


    double multval = pow(sheen, pval);  //Take the power of the dot product or 0 to the 'glossiness' value (pval)


    temp*=multval;  //Multiply each value in the rest of the specular equation by the result of max(0, dot product)^pval and return the result


    return temp;

}


//compareHits:  Here we see if the fastest hit time in one intersection record is quicker than the fastest one in another Intersection record (we compare hit times of both records).  The fastest Intersection is stored in the arguement best and the
//id of the object that was struck fastest is stored the the arguement champ
void Scene::compareHits(Intersection &a, Intersection &b, Intersection &best, int &champ, int contender)
{

    HitStuff tmp1;
    HitStuff tmp2;

    //If the first record (a) has hit an object, set it as the best record (put its fastest HitStuff record in best)
    if(a.getnumHits() > 0)
    {
        tmp1 = a.getHit(0);

        best.reset();

        best.setHit(tmp1);

    }

    //If Intersection b hits something and b is faster then set b to the best record if it's hit time is faster than a or a's object didn't record a hit.  In this case champ is set to the id of b but if a is faster or b hits nothing, champ is set to the id of a
    if(b.getnumHits() > 0)
    {
        tmp2 = b.getHit(0);


        if(a.getnumHits() == 0)
        {
            best.setHit(tmp2);
            champ = contender;
        }
        else if( tmp2.gethittime() < tmp1.gethittime() )
        {

            best.reset();
            best.setHit(tmp2);
            champ = contender;
        }
    }

}


//shade:  Calculates pixel colours based on our scene. Here we calculate if any objects were struck by a ray (arguement r) that was shot through a pixel and if it was we calculate and return the colour corresponding to the light sources and properties of said object or the background.
QVector3D Scene::shade(Ray &r)
{
    QVector3D colour;   //our end value for the colour to return will be set to this
    s.setABC(r);    //set up our sphere to see if the ray hits it
    s.hit(r, si);   //see if our ray hits the sphere in our scene


    int champ = 1;


    //best stores the information about the object that was struck by Ray r first
    Intersection best;

    //The intersection records for the walls, floor, and ceiling in our room.
    Intersection t11i;
    Intersection t12i;
    Intersection t21i;
    Intersection t22i;
    Intersection t31i;
    Intersection t32i;
    Intersection t41i;
    Intersection t42i;
    Intersection t51i;
    Intersection t52i;

    //The intersection records for the pyramid
    Intersection pyr1i;
    Intersection pyr2i;
    Intersection pyr3i;
    Intersection pyr4i;


    //10 lines below call the hit function to see if any of our walls are hit by the ray r.  The record for the object-ray interaction is stored in the second arguement.
    t11.hit(r, t11i);
    t12.hit(r, t12i);

    t21.hit(r, t21i);
    t22.hit(r, t22i);

    t31.hit(r, t31i);
    t32.hit(r, t32i);

    t41.hit(r, t41i);
    t42.hit(r, t42i);

    t51.hit(r, t51i);
    t52.hit(r, t52i);

    //4 lines below check and see if the pyramid was hit by the ray r.  The result of the interactions are stored in the Interaction record arguments.
    pyr1.hit(r, pyr1i);
    pyr2.hit(r, pyr2i);
    pyr3.hit(r, pyr3i);
    pyr4.hit(r, pyr4i);


//Below we compare the intersection records that were set in the hit calls above to see which (if any) object was struck first
    compareHits(si, t11i, best, champ, t11.getid());
    compareHits(best, t12i, best, champ, t12.getid());
    compareHits(best, t21i, best, champ, t21.getid());
    compareHits(best, t22i, best, champ, t22.getid());

    compareHits(best, t31i, best, champ, t31.getid());
    compareHits(best, t32i, best, champ, t32.getid());

    compareHits(best, t41i, best, champ, t41.getid());
    compareHits(best, t42i, best, champ, t42.getid());

    compareHits(best, t51i, best, champ, t51.getid());
    compareHits(best, t52i, best, champ, t52.getid());

    compareHits(best, pyr1i, best, champ, pyr1.getid());
    compareHits(best, pyr2i, best, champ, pyr2.getid());
    compareHits(best, pyr3i, best, champ, pyr3.getid());
    compareHits(best, pyr4i, best, champ, pyr4.getid());



    QVector3D ac;
    QVector3D lc;
    QVector3D sc;

    //Below we set up whether an area in our room should have a shadow cast on it or not.
    Ray shadow;
    shadow.setOrigin((best.getHit(0)).gethitPoint());   //Set the origin of the ray to be the part of the scene that was struck
    shadow.setDirection(ls.getCenter());    //Set up the direction to be the the direction from the hit point to the light source
    Intersection shadowi;
    ls.setABC(shadow);
    ls.hit(shadow,shadowi); //See if our ray hits the light source (done to get the t value of the ray)
    int winner = 0;
    Intersection shadowboxer;   //Store the fastest HitStuff record here.  This information will tell us if we need to have a shadow at a location

    //if we did hit an object see which one was hit
    if(best.getnumHits())
    {
        if(champ == 1) //If the sphere was hit first then get the colour the pixel should be given the sphere's hit information
        {
            ac = ambComponent(s.getkAmb(), Amb);
            lc = lambComponent(s.getkLam(), L1.getIntensity(), si);
            sc = specComponent(s.getkSpec(), L1.getIntensity(), r, si, s.getp());
            colour = ac+lc+sc;
        }

        //Champ 3 to 12 describe if the room was hit.  If it was we first calculate if there was a shadow in the area (the path from the hit point to the light is obstructed).  If there was draw the pixel without using the lambertian or specular components.
        //Otherwise, if the point isn't in a shadow (the ray from the hit point can reach the light without being obstructed) then colour the pixel with the specular and lambertian components for the part of the room that was hit
        else if(champ == 3)
        {
            //prepare the Intersection records for the shadow ray intersections
            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            //Below we see if the sphere or pyramid hit the shadow ray starting from the hit point on the room to the light source
            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);

            //We check to see if the shadow ray hits the light source first or another object
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());

            ac = ambComponent(t11.getkAmb(), Amb);
            if(winner==0)//The light source is hit first, use the entire Blinn Phong model to colour the pixel
            {

                lc = lambComponent(t11.getkLam(), L1.getIntensity(), t11i);
                sc = specComponent(t11.getkSpec(), L1.getIntensity(), r, t11i, t11.getp());
                colour = ac+lc+sc;
            }
            else    //An object blocks the light from the hit point, use only the ambient component to calculate the colour of the pixel
            {
                colour = ac;
            }

        }


        else if(champ == 4)
        {
            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());

            ac = ambComponent(t12.getkAmb(), Amb);
            if(winner==0)
            {


                lc = lambComponent(t12.getkLam(), L1.getIntensity(), t12i);
                sc = specComponent(t12.getkSpec(), L1.getIntensity(), r, t12i, t12.getp());
                colour = ac+lc+sc;
            }
            else
                colour = ac;

        }
        else if(champ == 5)
        {

            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());


            ac = ambComponent(t21.getkAmb(), Amb);

            if(winner==0)
            {
                lc = lambComponent(t21.getkLam(), L1.getIntensity(), t21i);
                sc = specComponent(t21.getkSpec(), L1.getIntensity(), r, t21i, t21.getp());
                colour = ac+lc+sc;
            }
            else
                colour = ac;

        }
        else if(champ == 6)
        {

            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());


            ac = ambComponent(t22.getkAmb(), Amb);

            if(winner==0)
            {
                lc = lambComponent(t22.getkLam(), L1.getIntensity(), t22i);
                sc = specComponent(t22.getkSpec(), L1.getIntensity(), r, t22i, t22.getp());
                colour = ac+lc+sc;
            }
            else
                colour = ac;

        }
        else if(champ == 7)
        {

            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());


            ac = ambComponent(t31.getkAmb(), Amb);

            if(winner==0)
            {
                lc = lambComponent(t31.getkLam(), L1.getIntensity(), t31i);
                sc = specComponent(t31.getkSpec(), L1.getIntensity(), r, t31i, t31.getp());
                colour = ac+lc+sc;
            }
            else
                colour = ac;

        }
        else if(champ == 8)
        {

            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());

            ac = ambComponent(t32.getkAmb(), Amb);
            if(winner==0)
            {
                lc = lambComponent(t32.getkLam(), L1.getIntensity(), t32i);
                sc = specComponent(t32.getkSpec(), L1.getIntensity(), r, t32i, t32.getp());
                colour = ac+lc+sc;
            }
            else
                colour = ac;

        }

        else if(champ == 9)
        {

            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());

            ac = ambComponent(t41.getkAmb(), Amb);
            if(winner==0)
            {
                lc = lambComponent(t41.getkLam(), L1.getIntensity(), t41i);
                sc = specComponent(t41.getkSpec(), L1.getIntensity(), r, t41i, t41.getp());
                colour = ac+lc+sc;
            }
            else
                colour = ac;

        }
        else if(champ == 10)
        {

            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());

            ac = ambComponent(t42.getkAmb(), Amb);
            if(winner==0)
            {
                lc = lambComponent(t42.getkLam(), L1.getIntensity(), t42i);
                sc = specComponent(t42.getkSpec(), L1.getIntensity(), r, t42i, t42.getp());
                colour = ac+lc+sc;
            }
            else
                colour = ac;

        }
        else if(champ == 11)
        {

            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());

            ac = ambComponent(t51.getkAmb(), Amb);
            if(winner==0)
            {
                lc = lambComponent(t51.getkLam(), L1.getIntensity(), t51i);
                sc = specComponent(t51.getkSpec(), L1.getIntensity(), r, t51i, t51.getp());
                colour = ac+lc+sc;
            }
            else
                colour = ac;
        }
        else if(champ == 12)
        {
            si.reset();
            pyr1i.reset();
            pyr2i.reset();
            pyr3i.reset();
            pyr4i.reset();

            s.setABC(shadow);
            s.hit(shadow, si);
            pyr1.hit(shadow,pyr1i);
            pyr2.hit(shadow,pyr2i);
            pyr3.hit(shadow,pyr3i);
            pyr4.hit(shadow,pyr4i);
            compareHits(shadowi, si, shadowboxer, winner, s.getid());
            compareHits(shadowi, pyr1i, shadowboxer, winner, pyr1.getid());
            compareHits(shadowi, pyr2i, shadowboxer, winner, pyr2.getid());
            compareHits(shadowi, pyr3i, shadowboxer, winner, pyr3.getid());
            compareHits(shadowi, pyr4i, shadowboxer, winner, pyr4.getid());

            ac = ambComponent(t52.getkAmb(), Amb);
            if(winner==0)
            {
                lc = lambComponent(t52.getkLam(), L1.getIntensity(), t52i);
                sc = specComponent(t52.getkSpec(), L1.getIntensity(), r, t52i, t52.getp());
                colour = ac+lc+sc;
            }
            else
                colour = ac;

        }

        //If a pyramid was hit draw (in cases where champ == 13 to 16), we will draw the pixel according to the specs for the pyramid
        else if(champ == 13)
        {

            ac = ambComponent(pyr1.getkAmb(), Amb);
            lc = lambComponent(pyr1.getkLam(), L1.getIntensity(), pyr1i);
            sc = specComponent(pyr1.getkSpec(), L1.getIntensity(), r, pyr1i, pyr1.getp());
            colour = ac+lc+sc;

        }
        else if(champ == 14)
        {

            ac = ambComponent(pyr2.getkAmb(), Amb);
            lc = lambComponent(pyr2.getkLam(), L1.getIntensity(), pyr2i);
            sc = specComponent(pyr2.getkSpec(), L1.getIntensity(), r, pyr2i, pyr2.getp());
            colour = ac+lc+sc;

        }
        else if(champ == 15)
        {

            ac = ambComponent(pyr3.getkAmb(), Amb);
            lc = lambComponent(pyr3.getkLam(), L1.getIntensity(), pyr3i);
            sc = specComponent(pyr3.getkSpec(), L1.getIntensity(), r, pyr3i, pyr3.getp());
            colour = ac+lc+sc;

        }
        else if(champ == 16)
        {

            ac = ambComponent(pyr4.getkAmb(), Amb);
            lc = lambComponent(pyr4.getkLam(), L1.getIntensity(), pyr4i);
            sc = specComponent(pyr4.getkSpec(), L1.getIntensity(), r, pyr4i, pyr4.getp());
            colour = ac+lc+sc;

        }

    }

    else//Ray intersects nothing.  Set the colour of the pixel to the background colour
    {

        colour.setX(1.0);
        colour.setY(1.0);
        colour.setZ(1.0);
    }

    //Reset all of the intersection member functions
    si.reset();
    p1i.reset();
    p2i.reset();
    p3i.reset();
    p4i.reset();
    best.reset();

    //Return the colour of the pixel
    return colour;
}
