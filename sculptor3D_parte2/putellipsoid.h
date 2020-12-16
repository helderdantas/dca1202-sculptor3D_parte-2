#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief ClassputEllipsoid 
 */
class putEllipsoid : public FiguraGeometrica
{
protected:
    int xcenter,ycenter,zcenter,rx,ry,rz,nx,ny,nz;
public:
    /**
     * @brief putEllipsoid
     */
    putEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry,int _rz,int _dimx,int _dimy,int _dimz,int _r,int _g,int _b,float _alpha);
   // ~putEllipsoid();
    void draw(Sculptor &t);
}
};

#endif // PUTELLIPSOID_H

