#ifndef PLANE_H
#define PLANE_H

#include "ray.h"
#include "intersection.h"


//The plane class.  Not used in code but allows us to draw a plane if we want.
class Plane
{
private:
    QVector3D N;//Normal vector we use to represent our plane
    QVector3D Q;//Point we use to represent our plane



    //The ambient, diffuse, specular components and pvalue for our plane
    QVector3D kAmb;
    QVector3D kLam;
    QVector3D kSpec;
    double pVal;
    int id; //The id tells us which object we're dealing with (floor, etc.)

public:
    Plane();

    //Constructor that sets a plane's member variables to the arguements given
    Plane(QVector3D Normal, QVector3D Qpt)
    {
        N=Normal; Q=Qpt;
    }

    //setPlane sets the member variables in our plane to the arguements given
    void setPlane(QVector3D Normal, QVector3D Qpt)
    {
        N=Normal; Q=Qpt;
    }

    //12 Functions below are used to set, return, and print the ambient, diffuse, specular, and p components for a plane object
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



    //3 functions below allow you to set the id for a plane function, return the id, and print it
    void setid(int identity){id = identity;}
    int getid(){return id;}
    void printid(){qDebug()<<"id is " << id;}


    //Return the normal representing the plane
    QVector3D getN(){return N;}

    //Return the point representing our plane
    QVector3D getQ(){return Q;}

    //hit sees if a ray hits our plane, store the results in the intersection record inter.  If it does hit return 1 else return 0.
    bool hit(Ray &r, Intersection &inter);//NEW VALUE

    //Print information about our plane (basically print the member variables)
    void printPlane()
    {
        qDebug()<<"Normal is"<<N;
        qDebug()<<"Point is "<< Q<<"\n";
    }

};

#endif // PLANE_H
