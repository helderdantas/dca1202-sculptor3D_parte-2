#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief A classe putVoxel
*/

class putVoxel : public FiguraGeometrica
{
    int x,y,z; // coordenadas no espaco tridimencional
public:
    /**
     * @brief putVoxel
     */
    putVoxel(int _x,int _y,int _z,float _r,float _g,float _b,float _alpha);
    //~putVoxel(){};
    void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
