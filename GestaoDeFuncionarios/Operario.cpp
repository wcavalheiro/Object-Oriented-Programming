#include "Operario.hpp"

int Operario::seed_id = 1;

Operario::Operario(string nome, string telefone, string rua, string cidade, int numero){
    this->codigoSetor = 1;
    this->nome = nome;
    this->telefone = telefone;
    this->rua = rua;
    this->cidade = cidade;
    this->numero = numero;
    comissao = 200.00;
    calculaSalario();
    defineSetor();
    id = geraID();
}

float Operario::getSalario(){
    return salario;
}

float Operario::getComissao(){
    return comissao;
}

float Operario::getValorProducao(){
    return valorProducao;
}

int Operario::getID()
{
    return id;
}

int Operario::geraID()
{
    return seed_id++;
}

void Operario::setSalario(float salario){
    this->salario = salario;
}

void Operario::setComissao(float comissao){
    this->comissao = comissao;
}

void Operario::calculaSalario(){
    salario = salarioBase + comissao;
}

void Operario::detalhesOperario(){
    cout << "ID........: " << getID() << endl;
    detalhesEmpregado();
    cout << "Salario...: R$ " << getSalario() << endl; 
}