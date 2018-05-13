#ifndef INTERSECTION_H
#define INTERSECTION_H

#include"HitStuff.h"


//The class Intersection contains all the Hit information for a particular object after a ray was shot.  All the hit information (entering and exiting) is contained in Hitstuff records.
class Intersection
{
    private:
        enum{MAX = 4};  //The max number of hit records we can store
        int numHits;    //The number of times a ray intersected an object
        HitStuff hit[MAX]; //The record for all of the ray intersections on a object

    public:

        //Constructor initially sets numHits to 0 (no objects struck)
        Intersection(){numHits = 0;}
        int getnumHits(){return numHits;}//Get the number of numHits

        void printMax(){qDebug()<<"Max is "<<MAX;} //print the max number of hits we can account for
        void printNumHits(){qDebug()<<"numHits is "<< numHits;} //print the number of times a ray intersected an object

        void printIntersection();//Print out information about the Intersection (involves printing out the class memebers)

        //getHit gets the HitStuff record for a particular index the the hit array (get a particular hit)
        HitStuff getHit(int val)
        {
            if( (val<numHits) && (val>-1) ) //If the arguement is in range then return the hit record at that position.
                return hit[val];
            else    //If the arguement is out of range then return the first record in hit (hit[0])
                return hit[0];
        }

        //setHit adds a new value to our hit array
        void setHit(HitStuff &hs);


        //resets an Intersection object by setting the numHits to 0.  Allowing you to reuse a Intersection object again.
        void reset(){numHits = 0;}

};

#endif // INTERSECTION_H
