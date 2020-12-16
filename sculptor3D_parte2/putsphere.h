#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief Classe putSphere
 */

class putSphere : public FiguraGeometrica
{
protected:
    int xcenter,ycenter,zcenter,radius,nx,ny,nz;
public:
     /**
     * @brief putSphere
     */
    putSphere(int _xcenter, int _ycenter, int _zcenter,int _radius, int _dimx,int _dimy,int _dimzfloat _r,float _g,float _b,float _alpha);
    //~putSphere();
    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H


