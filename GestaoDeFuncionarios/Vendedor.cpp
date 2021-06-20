#include "Vendedor.hpp"

int Vendedor::seed_id = 1;

Vendedor::Vendedor(string nome, string telefone, string rua, string cidade, int numero, int valorDeVenda)
{
    this->codigoSetor = 3;
    this->nome = nome;
    this->telefone = telefone;
    this->rua = rua;
    this->cidade = cidade;
    this->numero = numero;
    this->valorVendas = valorDeVenda;
    calculaComissao();
    calculaSalario();
    id = geraID();
}

void Vendedor::calculaComissao()
{
    comissao = valorVendas * 1.05;
}

int Vendedor::getID()
{
    return id;
}

int Vendedor::geraID()
{
    return seed_id++;
}

void Vendedor::setValorVendas(int valorVendas)
{
    this->valorVendas= valorVendas;
}

void Vendedor::calculaSalario()
{
    salario = salarioBase - (salarioBase * imposto);
    salario = salario + comissao;
}

void Vendedor::detalhesVendedor()
{
    cout << "ID........: " << getID() << endl;
    detalhesEmpregado();
    cout << "Salario...: R$ " << getSalario() << endl; 
}