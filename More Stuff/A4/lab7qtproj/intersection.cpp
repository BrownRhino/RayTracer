#include "intersection.h"


//setHit: Add HitStuff records to our hit array if it's not full (0<=numhits<MAX).  If it is we don't add anything to the hit array
void Intersection::setHit(HitStuff &hs)
{
    if ((numHits<MAX) && (numHits>-1))
    {
        hit[numHits].setStuff(hs.gethittime(), hs.getobject(), hs.getisentering(), hs.gethitPoint(), hs.gethitNormal());
        numHits++;

    }
    else
        return;
}


//print Intersection:  Will print all of the HitStuff records stored in our hit array for a particular intersection object
void Intersection::printIntersection()
{
    for(int j = 0; j<numHits; j++)
    {
        hit[j].printHitStuff();
        qDebug()<<"\n";
    }
}
