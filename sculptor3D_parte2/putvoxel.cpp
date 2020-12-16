#include "putvoxel.h"

putVoxel::putVoxel(int _x,int _y,int _z,float _r,float _g,float _b,float _alpha){
     x = _x; y = _y; z = _z; r_ = _r; g_ = _g; b_ = _b; alpha_ = _alpha;
}
/*
//Liberar a memória.
putVoxel::~putVoxel(){

}
*/

//Funcao para desenhar
void putVoxel:: draw(Sculptor &t){
    if(elementoForaDaMatriz(x, y, z) == true){ // verifica se há algum elemento fora dos limites da matriz
        voxel[z][x][y].isOn = true;
        voxel[z][x][y].r = r_;
        voxel[z][x][y].g = g_;
        voxel[z][x][y].b = b_;
        voxel[z][x][y].a = alpha_;
        t.setColor(r,g,b,a);
        t.putVoxel(x,y,z);
    }
    
}
