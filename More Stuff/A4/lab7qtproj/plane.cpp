#include "plane.h"

Plane::Plane()
{
}


//hit:  Checks if a ray (parameter r) intersects a plane.  If it does we return 1 and if it doesn't we return 0.  The record for the ray's interaction with the plane is recorded in the parameter inter.
bool Plane::hit(Ray &r, Intersection &inter)//NEW VALUE
{

    //Next 5 values will store the data used to set the HitStuff record to put into inter (where ht = hittime and hP is the hit point etc)
    double ht;
    int ie=2;
    HitStuff hs;
    QVector3D hP;
    QVector3D hN;



    //We get the ray's origin point and store it in eye and store its direction in dir
    QVector3D eye = r.getOrigin();
    QVector3D dir = r.getDirection();

    //We set the denom to the dot product between the normal and the direction of our ray
    double denom = QVector3D::dotProduct(N,dir);

    if(0==denom){return 0;}//if the dot product of N and dir is 0 we miss our plane

    //If denom is not negative, the ray hits the plane and the dot product of N and (Q - eye) gives us the t value the ray hits the plane (stored in the variable ht).  Note Q is a point on our plane that we know, it's stored as a member variable
    QVector3D temp(Q-eye);
    double num = QVector3D::dotProduct(N,temp);

    ht = num/denom;


    //If our hit time is sufficient we our values into a HitStuff object (hs) and store the values in that object in our intersection record.  We then return 1, signifying there was a hit.
    if(ht>0.00001)
    {

        hP = r.calcPoint(ht);

        hN = N;

        hs.setStuff(ht, 2, ie, hP, hN);//2 means plane
        inter.setHit(hs);

    }
    return 1;

}
