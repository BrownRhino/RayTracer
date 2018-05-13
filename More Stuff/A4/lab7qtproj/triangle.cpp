#include "triangle.h"

Triangle::Triangle()
{
}



//calcDeterminant: Calculates and returns the determinant of a 3x3 matrix.  Useful in determining if a ray intersects a triangle.
double Triangle::calcDeterminant(double val[9])
{
    double result;
    double first = ( (val[0] * val[4] * val[8]) + (val[1] * val[5] * val[6]) + (val[2]*val[3]*val[7]) );
    double second = ( (val[2]*val[4]*val[6]) + (val[1]*val[3]*val[8]) + (val[0]*val[5]*val[7]) );
    result = first - second;

    return result;
}



//hit:  Checks if a ray (parameter r) intersects a triangle.  If it does we return 1 and if it doesn't we return 0.  The record for the ray's interaction with the triangle is recorded in the parameter inter.
bool Triangle::hit(Ray &r, Intersection &inter)
{

    //Next 5 values will store the data used to set the HitStuff record to put into inter (where ht = hittime and hP is the hit point etc)
    double ht;
    int ie=2;
    HitStuff hs;
    QVector3D hP;
    QVector3D hN;

    //direct is the direction of the ray being shot and ori is the origin of the ray being shot
    QVector3D direct = r.getDirection();
    QVector3D ori = r.getOrigin();


    //If below we use information about our vertices and the origin and direction of our ray to create the following 4 matricies that will help us determine if the ray strikes the triangle
    double Adet;
    double betadet;
    double lamdadet;
    double tdet;


    double Amat[9] =
    {(a.x() - b.x()), (a.x() - c.x()),(direct.x()),
     (a.y() - b.y()), (a.y() - c.y()),(direct.y()),
     (a.z() - b.z()), (a.z() - c.z()),(direct.z())};

    double betamat[9] =
    {(a.x() - ori.x()),(a.x() - c.x()),(direct.x()),
     (a.y() - ori.y()),(a.y() - c.y()),(direct.y()),
     (a.z() - ori.z()),(a.z() - c.z()),(direct.z())};

    double lamdamat[9] =
    {(a.x() - b.x()),(a.x() - ori.x()),(direct.x()),
     (a.y() - b.y()),(a.y() - ori.y()),(direct.y()),
     (a.z() - b.z()),(a.z() - ori.z()),(direct.z())};

    double tmat[9] =
    {(a.x() - b.x()),(a.x() - c.x()),(a.x() - ori.x()),
     (a.y() - b.y()),(a.y() - c.y()),(a.y() - ori.y()),
     (a.z() - b.z()),(a.z() - c.z()),(a.z() - ori.z())};


    //Take the determinants of the 4 arrays declared above to find out if our triangle intersects our sphere
    Adet = calcDeterminant(Amat);
    betadet=calcDeterminant(betamat);
    lamdadet=calcDeterminant(lamdamat);
    tdet=calcDeterminant(tmat);


    //Divide 3 of our determinants by the determinant of Adet
    betadet/=Adet;
    lamdadet/=Adet;
    tdet/=Adet;

    //if betadet is greater than 0, lamdadet is greater than 0 and beta+lamdadet is less than 0, the ray hits our triangle.
    //Our HitStuff record hs is set with the values we calculated for a ray and triangle intersection.  hs is then stored in the Intersection object inter.  The value 1 is returned to signify there was a hit.
    if((betadet>0.0) && (lamdadet>0.0) && ((betadet+lamdadet)<1.0))
    {
        ht = tdet;
        hP = r.calcPoint(ht);
        hN = QVector3D::crossProduct((b-a),(c-a));
        hN.normalize();
        hs.setStuff(ht,3,ie,hP,hN);
        inter.setHit(hs);
        return 1;
    }
    else //If ray misses the triangle, return 0;
    {
        return 0;
    }

}
