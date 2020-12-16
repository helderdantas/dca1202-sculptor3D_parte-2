#include "cutvoxel.h"
#include "sculptor.h"

//Desativa o voxel na posição (x,y,z) (fazendo isOn = false)
cutVoxel::cutVoxel(int x, int y, int z){
  x=x;y=y;z=z;
}
/*
//libera a memória.
cutVoxel::~cutVoxel(){

}
*/

//Fucao de conte em relacao a um voxel
void cutVoxel::draw(Sculptor &t){
    
    if(elementoForaDaMatriz(x, y, z) == true){ // verificando se o usuário não está acessando algum elemento da matriz que não existe
        voxel[z][x][y].isOn = false;
    }
    t.cutVoxel(x,y,z);
}


