#include "sphere.h"
#include <cmath>

Sphere::Sphere()
{
}





//setABC: Given a particular sphere, we set our A, B, and C double member variables.  These will be used to calculate the time a ray hits our sphere later on in the hit function.
void Sphere::setABC(Ray &ban)
{

    QVector3D o = ban.getOrigin();

    QVector3D d = ban.getDirection();

    A = QVector3D::dotProduct(d,d);
    B = QVector3D::dotProduct( d, (o-center) );
    C = QVector3D::dotProduct((o-center), (o-center)) - (r*r);

}


//discrim calculates the descriminant of a quadratic equation.  The return value of this function is used to determine if a ray hits the sphere object or not.  1 specifies a hit, -1 specifies a hit, and 0 specifies a graze.
int Sphere::discrim()
{
    double temp;

    temp = ( (B*B) - (A*C) );
    if(temp>0.0) //Sphere hit, return 1
    {        
        return 1;
    }
    else if(temp<0.0) //Sphere missed, return -1
    {        
        return -1;
    }
    else    //Sphere grazed, return 0
    {        
        return 0;
    }
}


//quadratic:  Calculates the hit times for ray intersecting the sphere assuming the descriminant is non negative.  We store the potential 2 values the desriminant yields in the array arguement a.
void Sphere::quadratic(double a[])
{
    double temp;
    temp = ( (B*B) - (A*C) );

    a[0] = ( (-B) - (sqrt(temp)) );
    a[0] /= A;
    a[1] = ( (-B) + (sqrt(temp)) );
    a[1] /= A;

}

//calcNormal:  Here we calculate the normal vector to a surface point on our sphere and return the result.
QVector3D Sphere::calcNormal(QVector3D pt)
{
    QVector3D temp = pt - center;
    temp.normalize();
    return temp;
}



//hit:  Checks if a ray (parameter r) intersects a sphere.  If it does we return 1 and if it doesn't we return 0.  The record for the ray's interaction with the sphere is recorded in the parameter inter.
bool Sphere::hit(Ray &r, Intersection &inter)
{


    //Next 6 values will store the data used to set the HitStuff record to put into inter (where ht = hittime and hP is the hit point etc)
    double ht1; //First intersection value
    double ht2; //Second intersection value
    int ie=1;
    QVector3D hP;
    QVector3D hN;
    double whereHits[2];


    if(discrim() == -1) //Ray r missed the sphere, return 0
    {
        return 0;
    }
    else    //The ray r has intersected the sphere.
    {
        //Calculate the t's for the function
        quadratic(whereHits);
        //Describe first hit time
        ht1 = whereHits[0];
        //Describe next hit time
        ht2 = whereHits[1];

        HitStuff hs; //Stores hit information for the ray hitting the sphere

        //If our first hit time (ht1) is sufficient we our values into a HitStuff object (hs) and store the values in that object in our intersection record.
        if(ht1>0.00001)
        {
            hP = r.calcPoint(ht1);
            hN = calcNormal(hP);
            hs.setStuff(ht1, 1, ie, hP, hN);
            inter.setHit(hs);

        }

        //If our first hit time (ht1) is sufficient we our values into a HitStuff object (hs) and store the values in that object in our intersection record.  We then return 1 after the hit stmt, signifying there was a hit.
        if(ht2>0.00001)
        {
            ie=0;
            hP = r.calcPoint(ht2);
            hN = calcNormal(hP);
            hs.setStuff(ht2, 1, ie, hP, hN);
            inter.setHit(hs);
        }
        return 1;
    }
}
