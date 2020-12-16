#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief Class putBox 
 */
class putBox: public FiguraGeometrica
{
protected:
  
  /**
     * @brief putBox : Ativa todos os voxels nos intervalo [x0,x1], [y0,y1], [z0,z1] usando as cores e transparencia setadas previamente
     * @param x0 : coordenada inicial em x
     * @param x1 : coordenada final em x
     * @param y0 : coordenada inicial em y
     * @param y1 : coordenada final  em y
     * @param z0 : coordenada inicial em z
     * @param z1 : coordenada final  em z
     */
    int x1,y1,z1,x0,y0,z0;   
public:
    /**
     * @brief putBox
     */
    putBox(int x0, int x1,int y0, int y1,int z0, int z1, float _r,float _g,float _b,float alpha);
    // ~putBox();
    void draw(Sculptor &t);
};

#endif // PUTBOX_H

