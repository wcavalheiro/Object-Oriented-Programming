#ifndef Fornecedor_hpp
#define Fornecedor_hpp
#include "Pessoa.hpp"

class Fornecedor : public Pessoa{

public:
    Fornecedor(){};
    Fornecedor(string nome, string telefone, string rua, string cidade, int numero, float credito, float divida);

    void setCredito(float credito);
    void setDivida(float divida);
    float getCredito();
    float getDivida();
    float obterSaldo();

    int getID();

    void detalhesFornecedor();

protected:
    float saldo;
    float credito;
    float divida;
    float valorCredito;
    float valorDivida;
    static int seed_id;
    int id;
    int geraID();
};

#endif