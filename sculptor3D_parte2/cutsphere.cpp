#include "cutsphere.h"
#include <cmath>

cutSphere::cutSphere(int xcenter, int ycenter, int zcenter, int radius, int dimx,int dimy,int dimz){
     xcenter=xcenter;ycenter=ycenter;zcenter=zcenter; radius=radius; nx= dimx; ny=dimy; nz=dimz;
}

/*
//Liberar a memória.
cutSphere::~cutSphere(){

}
*/

//Desativa todos os voxels que satisfazem à equação da esfera
void cutSphere::draw(Sculptor &t){
    int i,j,k;
    double dist;
    for(k=0; k<nz; k++){
        for (i=0; i<nx; i++) {
            for (j=0; j<ny; j++){
               dist = pow(i-xcenter,2) + pow(j-ycenter,2) + pow(k-zcenter,2);
               if (dist <= pow(radius,2)){
                   t.cutVoxel(i,j,k);
               }
            }

        }
    }
}