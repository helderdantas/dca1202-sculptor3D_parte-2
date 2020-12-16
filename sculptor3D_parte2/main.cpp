#include <iostream>
#include <FiguraGeometrica.h>
#include <Sculptor.h>
#include <vector>
#include <interpretador.h>
#include <putvoxel.h>
#include <cutvoxel.h>
#include <putbox.h>
#include <cutbox.h>
using namespace std;
char* teste = "teste.OFF";
int main(void)
{
   Sculptor *s1;
   
   Interpretador parser;
   vector<figurageometrica*> figs;
   figs = parser.parse("/home/agostinho/escultura.txt");
   
    s1 = new Sculptor(parser.getDimx(), parser.getDimy(), parser.getDimz());
    for(size_t i=0; i<figs.size(); i++){
        cout << "draw\n";
        figs[i] ->draw(*s1);
    }
   
   s1-> writeOFF(teste);
   for(size_t i=o; i<figs.size(); i++){
       delete figs[i];
    }
    delete s1;
    return 0;
};
