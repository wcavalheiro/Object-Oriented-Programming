#include "Empregado.hpp"

#ifndef Vendedor_hpp
#define Vendedor_hpp

class Vendedor : public Empregado{
    
public:
    Vendedor(){};
    Vendedor(string nome, string telefone, string rua, string cidade, int numero, int valorDeVenda);

    void setValorVendas(int valorVendas);
    void calculaSalario();
    void detalhesVendedor();
    void calculaComissao();
    int getID();

private:
    float valorVendas;
    float comissao;
    float vendas;
    static int seed_id;
    int id;
    int geraID();
    
};

#endif