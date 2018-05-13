#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "ray.h"
#include "intersection.h"
#include <iostream>



//The Triangle class defines a triangle.  Now we can add triangle objects to our scene and ray trace them.
class Triangle
{
private:

    //Points a, b, and c represent the vertices for the triangle
    QVector3D a;
    QVector3D b;
    QVector3D c;


    int id; //The unique id number for a triangle


    QVector3D kAmb;//the ambient component of our triangle
    QVector3D kLam;//the diffuse component of our triangle
    QVector3D kSpec;//the specular component of our triangle
    double pVal;//the component determining the material glossiness of our triangle


    double calcDeterminant(double val[9]);  //calculate the determinant for a 3x3 matrix, which is useful in determining if a ray strikes a triangle





public:
    Triangle();

    //Determing if a ray strikes a triangle.  If it does return 1 else return 0.  Store the results in the intersection parameter.
    bool hit(Ray &r, Intersection &inter);

    //setTri will set the vertices (a,b,and c) to the arguements that are passed in
    void setTri(QVector3D first, QVector3D second , QVector3D third)
    {
        a = first;
        b = second;
        c = third;
    }


    //12 Functions below are used to set, return, and print the ambient, diffuse, specular, and p components for a sphere object.
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


    //3 functions below return vertices a, b, and c respectively
    QVector3D getA(){return a;}
    QVector3D getB(){return b;}
    QVector3D getC(){return c;}


    //Print the vertices in a triangle object
    void printTriangle()
    {
        qDebug()<<"The Vertices in our triangle are as follows: ";
        qDebug()<<"Vertex 1 is "<<a;
        qDebug()<<"Vertex 2 is "<<b;
        qDebug()<<"Vertex 3 is "<<c;
    }



    //The 3 functions below set, get, and print the Triangle objects id member
    void setid(int identity){id = identity;}
    int getid(){return id;}
    void printid(){qDebug()<<"id is " << id;}



    //Function below prints a 3x3 matrix but is never used
    void printTriArray(double vals[9])
    {
        for(int j = 0; j<9; j++)
        {
            std::cout<<vals[j]<<" ";            
        }
    }
};

#endif // TRIANGLE_H

