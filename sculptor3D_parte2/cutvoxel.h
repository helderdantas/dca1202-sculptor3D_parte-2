#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "sculptor.h"
#include "figurageometrica.h"
/**
* @brief Classe cutVoxel
*/ 
class cutVoxel : public FiguraGeometrica
{
protected:
    int x0,y0,z0;
public:
    /**
     * @brief cutVoxel
     */
    cutVoxel(int x,int y,int z);
    //~cutVoxel();
    void draw(Sculptor &t);
};

#endif // CUTVOXEL_H

