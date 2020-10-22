#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarCo(const Computadora &c);
    void mostrar();
    friend Laboratorio& operator<<(Laboratorio &la,const Computadora&c)
    {
        la.agregarCo(c);
        return la;
    }
};
#endif
