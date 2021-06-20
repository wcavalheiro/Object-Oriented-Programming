#include "Empregado.hpp"

string Empregado::defineSetor(){
    if (codigoSetor == 1){
        setor = "Operacoes";
        return setor;
    }
    else if(codigoSetor == 2){
        setor = "Administracao";
        return setor;
    }
    else if(codigoSetor == 3){
        setor = "Vendas";
        return setor;
    }
    else{
        cout << "Setor nao identificado" << endl;
    }
}

float Empregado::getSalario(){
    return salario;
}

void Empregado::setcodigoSetor(int codigoSetor){
    this->codigoSetor = codigoSetor;
}

void Empregado::detalhesEmpregado(){
    detalhesPessoa();
    cout << "Setor.....: " << defineSetor() << endl;
}