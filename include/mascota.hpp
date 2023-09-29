#include <string>
#include <iostream>

class Mascota
{
private:
    int vida;
    std::string nombre;
public:
   mascota(){ 
    this->vida=100;
    }
    void EstablecerNombre(std::string nombre) {
        
        this->nombre = nombre;

    }
    ~mascota() {}
    void DecirNombre()
    {
        std::cout<< "Mi nombre es: "<< this->nombre << std::endl;
    }
};