#include "monomio.h"

Monomio::Monomio(){
    x=0;
    y=0;
    cte=0;
}
Monomio::Monomio(int pX,int pY,int pCte){
    x=pX;
    y=pY;
    cte=pCte;
}
Monomio::Monomio(string m) {
    if(m.size()==4){
        x= m[2]- 48; //Convertir de char a int
        y= m[3]- 48;
        cte=m[1]- 48;
        cte*=-1;
    } else{
        x= m[1]- 48;
        y= m[2]- 48;
        cte=m[0]- 48;
    }
}
int Monomio::getX(){
    return x;
}
int Monomio::getY(){
    return y;
}
int Monomio::getCte(){
    return cte;
}
void Monomio::setX(int pX){
    x=pX;
}
void Monomio::setY(int pY){
    y=pY;
}
void Monomio::setCte(int pCte){
    cte=pCte;
}

void Monomio::print() {
    std::cout<<cte<<" x^"<<x<<" y^"<<y;
}

void Monomio::println(){
    std::cout<<cte<<" x^"<<x<<" y^"<<y<<std::endl;
}
