#include "Pessoa.hpp"

Pessoa::Pessoa(string nome, string telefone, string rua, string cidade, int numero){
    this->nome = nome;
    this->telefone = telefone;
    this->rua = rua;
    this->cidade = cidade;
    this->numero = numero;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

void Pessoa::setRua(string rua){
    this->rua = rua;
}
    
void Pessoa::setCidade(string cidade){
    this->cidade = cidade;
}
    
void Pessoa::setNumero(int numero){
    this->numero = numero;
}


string Pessoa::getNome(){
    return nome;
}

string Pessoa::getTelefone(){
    return telefone;
}
    
string Pessoa::getRua(){
    return rua;
} 

string Pessoa::getCidade(){   
    return cidade;
} 

int Pessoa::getNumero(){
    return numero;
} 


void Pessoa::endereco(){
    cout << "Rua.......: " << getRua() << ", " << getNumero() << endl;
    cout << "Cidade....: " << getCidade() << endl;
}

void Pessoa::detalhesPessoa(){
    cout << "Nome......: " << getNome() << endl;
    cout << "Telefone..: " << getTelefone() << endl;
    endereco(); 
}
