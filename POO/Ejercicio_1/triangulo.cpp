#include "triangulo.h"

void triangulo::setb(int base){
    b = base;
};
int triangulo::getb(){
    return b;
}
void triangulo::seth(int altura){
    h = altura;
};
int triangulo::geth(){
    return h;
}
void triangulo::superficie(){
    s = 0.;
    s = ((b*h)/2);
}
float triangulo::gets(){
    return s;
}