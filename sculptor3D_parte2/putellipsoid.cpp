#include "putellipsoid.h"

putEllipsoid::putEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry,int _rz,int _dimx,int _dimy,int _dimz,int _r,int _g,int _b,float _alpha)
{
    xcenter=_xcenter;ycenter=_ycenter;zcenter=_zcenter;rx=_rx;ry=_ry;rz=_rz;
    r_=_r;g_=_g;b_=_b; alpha_=_alpha; nx =_dimx; ny=_dimy; nz=_dimz;
}
/*
//Liberar a memória.
putEllipsoid::~putEllipsoid(){

}
*/

//Ativa todos os voxels que satisfazem à equação do elipsóide e atribui aos mesmos a cor atual de desenho
void putEllipsoid::draw(Sculptor &t){

    int i,j,k;
    double dist;
    t.setColor(r_,g_,b_,alpha_);
    if (rx ==0){
        for (k=0;k<nz;k++) {
            for (j=0;j<ny;j++) {
                dist =  pow(j-ycenter,2)/pow(ry,2) + pow(k-zcenter,2)/pow(rz,2);
                if(dist<=1){
                    t.putVoxel(xcenter,j,k);
              }
            }
        }
    }
    else if(ry==0){
        for (k=0;k<nz;k++) {
            for (i=0;i<nx;i++) {
                dist =  pow(i-xcenter,2)/pow(rx,2) + pow(k-zcenter,2)/pow(rz,2);
                if(dist<=1){
                    t.putVoxel(i,ycenter,k);
              }
            }
        }
    }
    else if (rz==0) {
        for (i=0;i<nx;i++) {
            for (j=0;j<ny;j++) {
                dist =  pow(i-xcenter,2)/pow(rx,2) + pow(j-ycenter,2)/pow(ry,2);
                if(dist<=1){
                    t.putVoxel(i,j,zcenter);
              }
            }
        }
    }
    else{
    for (k=0;k<nz;k++) {
        for (i=0;i<nx;i++) {
            for (j=0;j<ny;j++) {
                  dist = pow(i-xcenter,2)/pow(rx,2) + pow(j-ycenter,2)/pow(ry,2) + pow(k-zcenter,2)/pow(rz,2);
                if(dist<=1){
                    t.putVoxel(i,j,k);
                }

            }

        }
      }
    }
}
