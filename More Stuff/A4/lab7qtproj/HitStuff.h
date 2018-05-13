#ifndef HITSTUFF_H
#define HITSTUFF_H

#include <QVector3D>
#include <QDebug>

//The class HitStuff is basically a record that contains information about a particular ray hit

class HitStuff
{
private:
    double hittime; //The time the ray made contact with an object.  Time represents the t in the equation R = O + tD
    int object;//What object was hit.  1 means sphere; 2 means other
    bool isentering;    //If the ray entering the object (this is represented by a 1) or exiting it (represented by a 0)
    QVector3D hitPoint; //The point on the object that was hit
    QVector3D hitNormal;    //The normal to the point that was hit on the object


public:

    //setStuff will set all of the member variables in hit stuff to the arguements passed to the function
    void setStuff(double ht, int ob, bool ie, QVector3D hP, QVector3D hN)
    {
        hittime = ht;
        object = ob;
        isentering = ie;
        hitPoint = hP;
        hitNormal = hN;
    }

    //In the 5 functions below we return the value of a specific member variable of HitStuff object specified by the method's name (eg. gethittime() returns hittime)
    double gethittime(){return hittime;}
    int getobject(){return object;}
    bool getisentering(){return isentering;}
    QVector3D gethitPoint(){return hitPoint;}
    QVector3D gethitNormal(){return hitNormal;}


    //The method below will print out the values of the member variables in HitStuff
    void printHitStuff()
    {
        qDebug()<<"hittime is "<< hittime;
        qDebug()<<"object is "<< object;
        qDebug()<<"isentering is "<< isentering;
        qDebug()<<"hitPoint is "<< hitPoint;
        qDebug()<<"hitNormal is "<<hitNormal;
    }

};

#endif // HITSTUFF_H
