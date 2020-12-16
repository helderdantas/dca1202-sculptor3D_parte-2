#include <FiguraGeometrica.h>
#include "interpretador.h"
#include <Sculptor.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <putvoxel.h>
#include <cutvoxel.h>
#include <putbox.h>
#include <cutbox.h>
#include <putellipsoid.h>
#include <cutellipsoid.h>
#include <putsphere.h>
#include <cutsphere.h>
#include <string>s

Interpretador::Interpretador(){

}
std:: vector<FiguraGeometrica*> Interpretador::parse(std::string filename){


    std::vector<FiguraGeometrica*> figs;
    std::ifstream fin;
    std::stringstream ss;
    std:: string s, token;

    fin.open(filename.c_str());
    //verifica se o fluxo foi aberto
    fi(!fin.is_open()){
        std:: cout<<"nao abriu"<< filename << std::endl;
        exit(0);
    }

    while(fin.good()){
        // fin>> s;
        std:: getline(fin,s);
        if(fin.good()){
            // lanca o string s no fluxo ss
            ss.clear();
            ss.str(s);
             ss >> token;
            // realiza o parsing dos tokens
            if(ss.good()){
                // dimensoes da tela
                if(token.compare("dim") == 0){
                ss >> dimx >> dimy >> dimz;
            }
            // usuario define brush
            else if(token.compare("putvoxel") == 0){
                int x0,y0,z0;
                ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                figs.push_back(new putVoxel(x0, y0, z0, r, g, b ,alpha));
            }
            /*
            else if(token.compare("putephere") == 0){
                int xcenter,ycenter,zcenter;
                ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
                figs.push_back(new putSphere(int xcenter,int ycenter,int zcenter,int radius,float _r,float _g,float _b,float alpha));
            }
            */


            }
        }
    }   
    return (figs);
}

int Interpretador:: getDimx(){
    return dimx;
}
int Interpretador:: getDimy(){
    return dimy;
}
int Interpretador:: getDimz(){
    return dimz;
}