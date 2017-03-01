#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <vector>
#include "monomio.h"

using namespace std;
class Polinomio {
private:
    vector<Monomio> monomios;
public:
    Polinomio();
    Polinomio(string poli);
    void addMonomio(Monomio m);
    void addMonomioResta(Monomio m);
    Monomio sumaMonomios(Monomio m1, Monomio m2);
    bool isSemejante(Monomio m1, Monomio m2);
    Monomio productoMonomios(Monomio m1, Monomio m2);
    Monomio restaMonomios(Monomio m1, Monomio m2);
    vector<Monomio> getMonomios();
    void println();
};

#endif // POLINOMIO_H
