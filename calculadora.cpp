#include "calculadora.h"

Calculadora::Calculadora() {

}

Polinomio Calculadora::sumaPolinomios(Polinomio p1,Polinomio p2){
    vector<Monomio> monomiosP2=p2.getMonomios();
    Polinomio pTemp=p1;
    for(int i=0;i<monomiosP2.size();i++){
        pTemp.addMonomio(monomiosP2[i]);
    }
    return pTemp;
}

Polinomio Calculadora::restaPolimonios(Polinomio p1,Polinomio p2){
    vector<Monomio> monomiosP2=p2.getMonomios();
    Polinomio pTemp=p1;
    for(int i=0;i<monomiosP2.size();i++){
        pTemp.addMonomioResta(monomiosP2[i]);
    }
    return pTemp;
}

Polinomio Calculadora::productoPolinomios(Polinomio p1,Polinomio p2){
    Polinomio pTemp={};
    vector<Monomio> v1=p1.getMonomios();
    vector<Monomio> v2=p2.getMonomios();
    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            Monomio mTemp=pTemp.productoMonomios(v1[i],v2[j]);
            pTemp.addMonomio(mTemp);
        }
    }
    return pTemp;
}

int Calculadora::evaluacionPolinomios(Polinomio p1, int x,int  y) {
    vector<Monomio> v1=p1.getMonomios();
    int num=0;
    for (int i=0;i<v1.size();i++){
        num+=v1[i].getCte()*pow(x,v1[i].getX())*pow(y,v1[i].getY());
    }
    return num;
}
