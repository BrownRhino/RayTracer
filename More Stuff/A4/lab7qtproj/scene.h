#ifndef SCENE_H
#define SCENE_H

#include"sphere.h"
#include"intersection.h"
#include <QDebug>
#include "Light.h"
#include <cmath>
#include "plane.h"
#include "triangle.h"

//Scene contains infomation about a scene in our program
class Scene
{

private:

    //A particular scene can contain the following:


    //A sphere representing the light from a light source as well as in Intersection record for it.  Useful for shadowing purposes
    Sphere ls;
    Intersection lsi;

    //A sphere we will have in our scene and an intersection record for it.
    Sphere s;
    Intersection si;

    //An actual light source represented by L1
    Light L1;


    //Several planes (p1-p5).  With an intersection record for each one as well (p1i-p5i).
    Plane p1;
    Intersection p1i;

    Plane p2;
    Intersection p2i;

    Plane p3;
    Intersection p3i;

    Plane p4;
    Intersection p4i;

    Plane p5;
    Intersection p5i;


//Triangle t11 to t52 used for composing the walls, floors, and ceiling for our room
    Triangle t11;
    Triangle t12;

    Triangle t21;
    Triangle t22;

    Triangle t31;
    Triangle t32;

    Triangle t41;
    Triangle t42;

    Triangle t51;
    Triangle t52;


    //Triangles used to form our pyramid
    Triangle pyr1;
    Triangle pyr2;
    Triangle pyr3;
    Triangle pyr4;



    //An ambient component for our room
    QVector3D Amb;

    //The three functions below are for calculating the ambient, lambertian, and specular qualities of light on an object in our scene
    QVector3D ambComponent(const QVector3D &a, const QVector3D &b);
    QVector3D lambComponent(const QVector3D &kdi, const QVector3D &inten, Intersection &buzz);
    QVector3D specComponent(const QVector3D &spc, const QVector3D &inten, const Ray &ray, Intersection &buzz, double pval);

    //Function below not used.  Used it for calculating shadows emitted by a sphere
    double hittimesphere(Sphere &sa, Ray &shadow, Intersection &standard);


public:
    Scene();




    //setScene sets the sphere and light members to whatever value is specified in the arguements
    void setScene(QVector3D sph, double rad, QVector3D kam, QVector3D klam, QVector3D kspec, double pv, QVector3D ls1Posn, QVector3D ls1Inten);

    //We can print the information about the light source in our scene
    void printLightSource(Light LS){LS.printLight();}




    //printScene prints information about our scene
    void printScene(){qDebug()<<"Your scene has \n"; s.printSphere(); p1.printPlane();}

    //shade is used to fire a ray into our scene and see what happens
    QVector3D shade(Ray &r);


    //compareHits takes in the hit records of 2 primative objects (spheres, triangles, or planes) and determines which one the ray strikes first
    void compareHits(Intersection &a, Intersection &b, Intersection &best, int &champ, int contender);

};

#endif // SCENE_H


