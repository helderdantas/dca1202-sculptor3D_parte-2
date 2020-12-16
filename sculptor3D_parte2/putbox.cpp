#include "putbox.h"

putBox::putBox(int x0, int x1, int y0, int y1, int z0, int z1, float _r,float _g,float _b,float alpha)
{
    x0=x0;y0=y0;z0=z0;
    x1=x1;y1=y1;z1=z1;
    r_=_r;g_=_g;b_=_b;alpha_=alpha;

}
/*
//Liberar a memória.
putBox::~putBox(){

}
*/
//Função para desenhar.
/**
 * @brief putBox::draw
 * */
void putBox::draw(Sculptor &t){
    int i,j,k;
    for (k=z0; k<=z1; k++){
        for (i=x0; i<=x1; i++) {
            for (j=y0; j<=y1; j++) {
                t.putVoxel(i,j,k);
            }
        }
    }
}