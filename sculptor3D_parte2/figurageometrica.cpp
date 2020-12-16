#include "figurageometrica.h"
#include"sculptor.h"

//Class abstrata, orientadora durante o processo do desenho.

FiguraGeometrica::FiguraGeometrica()
{
r_ =g_ = b_ = alpha_ = 0;

}

void FiguraGeometrica::draw(Sculptor &t){

}

//Liberar a memória.
FiguraGeometrica::~FiguraGeometrica(){

}
