#include "Empregado.hpp"

#ifndef Operario_hpp
#define Operario_hpp

class Operario : public Empregado{
public:
    Operario(){};
    Operario(string nome, string telefone, string rua, string cidade, int numero);
    void setSalario(float salario);
    void setComissao(float comissao);
    void calculaSalario();  
    void detalhesOperario();
    float getSalario();
    float getComissao();
    float getValorProducao();
    int getID();

protected:
    float salario;
    float comissao;
    float valorProducao;
    static int seed_id;
    int id;
    int geraID();
};

#endif