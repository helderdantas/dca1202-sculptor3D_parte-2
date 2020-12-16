#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief Classe cutBox
 */

class cutBox : public FiguraGeometrica
{
protected:
    int x1_,x0_,y0_,y1_,z0_,z1_;
public:
/**
     * @brief cutBox
     */
    cutBox(int x0, int x1,int y0, int y1,int z0, int z1);
    // ~cutBox();
    /**
     * @brief draw
     */
    void draw(Sculptor &t);
};

#endif // CUTBOX_H

