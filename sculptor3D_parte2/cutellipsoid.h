#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief Classe cutEllipsoid 
 */

class cutEllipsoid : public FiguraGeometrica
{
protected:
    int xcenter,ycenter,zcenter;
    int rx,ry,rz;
    int nx,ny, nz;
public:
    /**
     * @brief cutEllipsoid
     */
    cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, int dimx,int dimy,int dimz);
    // virtual ~cutEllipsoid();
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H




