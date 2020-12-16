#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief Class cutSphere
 */

class cutSphere : public FiguraGeometrica
{
protected:
    int xcenter,ycenter,zcenter,radius, nx, ny, nz;
public:
    /**
     * @brief cutSphere
     */
    cutSphere(int xcenter, int ycenter, int zcenter, int radius, int dimx,int dimy,int dimz);
   // ~cutSphere();
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H

