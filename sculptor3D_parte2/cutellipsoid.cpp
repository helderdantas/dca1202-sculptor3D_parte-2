#include "cutellipsoid.h"
#include <Sculptor.h>
#include <cmath>

cutEllipsoid::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, int dimx,int dimy,int dimz)
{
    xcenter=xcenter;ycenter=ycenter;zcenter=zcenter;rx=rx;ry=ry;rz=rz, nx=dimx; ny=dimy; nz=dimz;
   

}
/*
//Liberar a memória.
cutEllipsoid::~cutEllipsoid()
{

}
*/

// Desativa todos os voxels que satisfazem à equação do elipsóide
void cutEllipsoid::draw(Sculptor &t){
    int i,j,k;
    double dist;
    if (rx ==0){
        for (k=0;k<nz;k++) {
            for (j=0;j<ny;j++) {
                dist =  pow(j-ycenter,2)/pow(ry,2) + pow(k-zcenter,2)/pow(rz,2);
                if(dist<=1){
                    t.cutVoxel(xcenter,j,k);
              }
            }
        }
    }
    else if(ry==0){
        for (k=0;k<nz;k++) {
            for (i=0;i<nx;i++) {
                dist =  pow(i-xcenter,2)/pow(rx,2) + pow(k-zcenter,2)/pow(rz,2);
                if(dist<=1){
                    t.cutVoxel(i,ycenter,k);
              }
            }
        }
    }
    else if (rz==0) {
        for (i=0;i<nx;i++) {
            for (j=0;j<ny;j++) {
                dist =  pow(i-xcenter,2)/pow(rx,2) + pow(j-ycenter,2)/pow(ry,2);
                if(dist<=1){
                    t.cutVoxel(i,j,zcenter);
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
                    t.cutVoxel(i,j,k);
                }

            }

        }
    }
    }
}