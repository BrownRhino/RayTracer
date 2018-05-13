#ifndef SPHERE_H
#define SPHERE_H

#include "ray.h"
#include "intersection.h"

//The Sphere class defines a sphere.  Now we can add sphere objects to our scene and ray trace them.
class Sphere
{
private:
    QVector3D center;//the center of our sphere
    double r;//the radius of our sphere


    //A, B, and C (below) are values used to determine if a particular ray strikes our sphere
    double A;
    double B;
    double C;

    int id;//the unique identification of our sphere



    QVector3D kAmb;//the ambient component of our sphere
    QVector3D kLam;//the diffuse component of our sphere

    QVector3D kSpec;//the specular component of our sphere
    double pVal;//the component determining the material glossiness of our sphere

    //Variable not used to track the number of times a sphere was hit and both the hit times for a sphere if it was intersected
    int numHits;
    double hitTimes[2];


public:
    Sphere();


    //Constructor setting the center and radius for a sphere to arguements that are passed
    Sphere(double a, double b, double c, double d)
    {
        center.setX(a); center.setY(b); center.setZ(c); r = d;
    }

    //setSphere sets the center and radius for a sphere to arguements that are passed
    void setSphere(double a, double b, double c, double d)
    {
        center.setX(a); center.setY(b); center.setZ(c); r = d;
    }




    //12 Functions below are used to set, return, and print the ambient, diffuse, specular, and p components for a sphere object
    void setkAmb(QVector3D mrt){kAmb = mrt;}
    QVector3D getkAmb(){return kAmb;}
    void printkAmb(){qDebug()<<"kAmb is " << kAmb;}

    void setkLam(QVector3D mrt){kLam = mrt;}
    QVector3D getkLam(){return kLam;}
    void printkLam(){qDebug()<<"kLam is " << kLam;}

    void setkSpec(QVector3D mrt){kSpec = mrt;}
    QVector3D getkSpec(){return kSpec;}
    void printkSpec(){qDebug()<<"kSpec is " << kSpec;}

    void setp(double gloss){pVal = gloss;}
    double getp(){return pVal;}
    void printp(){qDebug()<<"p is " << pVal;}

    void setid(int identity){id = identity;}
    int getid(){return id;}
    void printid(){qDebug()<<"id is " << id;}


    //return the center of a sphere
    QVector3D getCenter(){return center;}

    //sets the A, B, and C member functions given a ray
    void setABC(Ray &ban);

    //finds the descriminant used to calculate the time a sphere is intersected
    int discrim();

    //Uses the quadratic funtion to find the time a sphere is intersected
    void quadratic(double a[]);

    //Used to calculate when a particular ray hits a sphere and puts information about that in the passed in intersection arguement.  If there is a hit return 1 else return 0.
    bool hit(Ray &r, Intersection &inter);

    //Next 2 functions return your first hittime and the numHits.  These functions are never used
    double gethitTimes(){return hitTimes[0];}
    int getnumHits(){return numHits;}

    //We calculate the normal at a particular point (which is passed in) on our sphere.
    QVector3D calcNormal(QVector3D pt);

    //print out information about a sphere object (its center and radius)
    void printSphere()
    {
        qDebug()<<center;
        qDebug()<<"radius is "<< r<<"\n";
    }

};


#endif // SPHERE_H
