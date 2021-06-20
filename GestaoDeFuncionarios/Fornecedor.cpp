#include "Fornecedor.hpp"

int Fornecedor::seed_id = 1;

Fornecedor::Fornecedor(string nome, string telefone, string rua, string cidade, int numero, float credito, float divida){
    this->nome = nome;
    this->telefone = telefone;
    this->rua = rua;
    this->cidade = cidade;
    this->numero = numero;
    this->credito = credito;
    this->divida = divida;
    obterSaldo();
    id = geraID();
}

void Fornecedor::setCredito(float credito) {
    this->credito = credito;
}

void Fornecedor::setDivida(float divida) {
    this->divida = divida;
}

float Fornecedor::getCredito(){
    return credito;
}

float Fornecedor::getDivida(){
    return divida;
}

float Fornecedor::obterSaldo(){
    saldo = credito - divida;
    return saldo;
}

int Fornecedor::getID()
{
    return id;
}

void Fornecedor::detalhesFornecedor()
{
    cout << "ID........: " << getID() << endl;
    detalhesPessoa();
    cout << fixed;
    cout.precision(2);
    cout << "Divida...: R$ " << getDivida() << endl; 
    cout << "Credito..: R$ " << getCredito() << endl;
    cout << "Saldo....: R$ " << obterSaldo() << endl;
}

int Fornecedor::geraID()
{
    return seed_id++;
}
