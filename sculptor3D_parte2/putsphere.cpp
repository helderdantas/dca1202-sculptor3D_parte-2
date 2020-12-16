#include "putsphere.h"

putSphere::putSphere(int _xcenter, int _ycenter, int _zcenter,int _radius, int _dimx,int _dimy,int _dimz, float _r,float _g,float _b,float _alpha){
  
   xcenter=_xcenter;ycenter=_ycenter;zcenter=_zcenter;radius=_radius; nx = _dimx; ny = _dimy; nz = _dimz;
    r_=_r;g_=_g;b_=_b;_alpha=_alpha;
}
//liberar a memória.
putSphere::~putSphere(){

}

//Ativa todos os voxels que satisfazem à equação da esfera e atribui aos mesmos a cor atual de desenho
void putSphere::draw(Sculptor &t){
    int i,j,k;
    double dist;
     t.setColor(r_,g_,b_,alpha_);
    for(k=0; k<nz; k++){
        for (i=0; i<nx; i++) {
            for (j=0; j<ny; j++){
               dist = pow(i-xcenter,2) + pow(j-ycenter,2) + pow(k-zcenter,2);
               if (dist <= pow(radius,2)){
                   t.putVoxel(i,j,k);
               }
            }

        }
    }
}