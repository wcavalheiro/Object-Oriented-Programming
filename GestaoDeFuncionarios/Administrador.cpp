#include "Administrador.hpp"

int Administrador::seed_id = 1;

Administrador::Administrador(string nome, string telefone, string rua, string cidade, int numero){
    this->codigoSetor = 2;
    this->nome = nome;
    this->telefone = telefone;
    this->rua = rua;
    this->cidade = cidade;
    this->numero = numero;
    ajudaDeCusto = 300.00;
    id = geraID();
    calculaSalario();
    defineSetor();
}

void Administrador::calculaSalario(){
    salario = salarioBase - (salarioBase * imposto) + ajudaDeCusto;
}

void Administrador::detalhesAdministrador(){
    cout << "ID.........: " << getID() << endl;
    detalhesEmpregado();
    cout << "Salario...: R$ " << getSalario() << endl; 
}

int Administrador::getID()
{
    return id;
}

int Administrador::geraID()
{
    return seed_id++;
}
