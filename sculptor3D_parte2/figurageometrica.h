#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <sculptor.h>
/**
 * @brief classe FiguraGeometrica
*/

class FiguraGeometrica
{
protected:
 float r_,g_,b_,alpha_;
public:
   
    /**
     * @brief FiguraGeometrica
     */
    virtual ~FiguraGeometrica(){};
    /**
     * @brief draw
     */
    virtual void draw(Sculptor &t)=0;
};

#endif // FIGURAGEOMETRICA_H
