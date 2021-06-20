#include "Empregado.hpp"

#ifndef Administrador_hpp
#define Administrador_hpp

class Administrador : public Empregado{
    
public:
    Administrador(){};
    Administrador(string nome, string telefone, string rua, string cidade, int numero);
    void calculaSalario();
    void detalhesAdministrador();
 
    int getID();


private:
    float ajudaDeCusto;
    static int seed_id;
    int id;
    int geraID();
};

#endif