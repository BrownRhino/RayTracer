#ifndef LIGHT_H
#define LIGHT_H

#include <QVector3D>
#include <QDebug>



//The Light class contains the information about the light sources in my image.

class Light
{
private:
    QVector3D position; //Position of light in our picture
    QVector3D intensity;//Intensity of light in our picture
public:
    Light(){}

    //Constructor which sets the position and intensity member vars through parameters
    Light(QVector3D &p, QVector3D &intense){position = p; intensity = intense;}


    //setLight sets the position and intensity member vars through parameters
    void setLight(QVector3D &p, QVector3D &intense){position = p; intensity = intense;}

    //print our information about our light source (basically printing the member variables)
    void printLight(){qDebug()<<"position is "<<position << "\nintensity is "<<intensity;}

    //getPosition and getIntensity are two member functions that return the light position and intensity member functions respectively
    QVector3D getPosition(){return position;}
    QVector3D getIntensity(){return intensity;}
};

#endif // LIGHT_H
