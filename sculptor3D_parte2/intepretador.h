#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include "figurageometrica"
#include <string>
#include <Sculptor.h>

class Interpretador{
    int dimx, dimy, dimz;
    float f,g,b,a;
public:
Interpretador();
std:: vector<FiguraGeometrica *> parse(std:: string filename);
int getDimx();
int getDimy();
int getDimz();
};

#endif // INTERPRETADOR_H

