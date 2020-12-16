#include "cutbox.h"

cutBox::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    x0_=x0;y0_=y0;z0_=z0;
    x1_=x1-1 ;y1_=y1-1;z1_=z1-1;

}
/*
//Liberar a memória.
cutBox::~cutBox(){

}
*/

// Desativa todos os voxels no intervalo x∈[x0,x1], y∈[y0,y1], z∈[z0,z1] e atribui aos mesmos a cor atual de desenho
void cutBox::draw(Sculptor &t){
    int i,j,k;
    for (k=z0; k<=z1_; k++){
        for (i=x0_; i<=x1_; i++) {
            for (j=y0_; j<=y1_; j++) {
                t.cutVoxel(i,j,k);
            }
        }
    }
}