#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Laboratorio L;
    L.recuperar();
    L.recuperar();
    L.mostrar();

    /*Computadora c01 = Computadora("windows","Citlalli",4,60.1);
    Computadora c02;

    c02.setSistema("MACios");
    c02.setNombre("Adela");
    c02.setMemoria(4);
    c02.setAlmacenamiento(59.3);

    Laboratorio L;
    //L.agregarCo(c01);
    //L.agregarCo(c02);
    L<<c01<<c02;
    //cout<<c01;
    Computadora c03;
    cin>>c03;
    L<<c03;
    L.mostrar();*/

    return 0;
}
