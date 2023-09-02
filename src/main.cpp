#include <iostream>
#include <Mascota.hpp>

int main (int argc, char const *argv[])
{

    std::cout<<"juego de mascota"<<std::endl;

    Mascota m1,m2,m3;
    m1.EstablecerNombre("firulais");
    m2.EstablecerNombre("scubi");
    m3.EstablecerNombre("scubi 2");

    m1.DecirNombre();
    m1.DecirNombre();
    m1.DecirNombre();

    return 0; 

}