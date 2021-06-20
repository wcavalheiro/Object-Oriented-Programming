#include <iostream>
#include <string>
using namespace std;

#ifndef Pessoa_hpp
#define Pessoa_hpp

class Pessoa{

public:
    Pessoa(){};
    Pessoa(string nome, string telefone, string rua, string cidade, int numero);

    void setNome(string nome);
    void setTelefone(string telefone);
    void setRua(string rua);
    void setCidade(string cidade);
    void setNumero(int numero);

    string getNome();
    string getTelefone();
    string getRua();
    string getCidade();
    int getNumero();

    void detalhesPessoa();
    void endereco();

    void adicionaPessoa(Pessoa pessoa);

protected:
    string nome;
    string rua;
    string cidade; 
    int numero;
    string telefone;
    
};

#endif // Pessoa_hpp