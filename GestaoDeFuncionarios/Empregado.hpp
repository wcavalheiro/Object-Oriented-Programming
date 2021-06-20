#include "Pessoa.hpp"

#ifndef Empregado_hpp
#define Empregado_hpp

class Empregado: public Pessoa
{
    public:
        Empregado(){};

        void setcodigoSetor(int codigoSetor);
        int getcodigoSetor();
        string defineSetor();
        
        float getSalario();
        float getimposto();

        virtual void calculaSalario() = 0;

        void detalhesEmpregado();

    protected:
        float salario;
        string setor; 
        int codigoSetor;
        float salarioBase = 1000.00;
        float imposto = 0.05;
    };

#endif // Empregado_hpp
