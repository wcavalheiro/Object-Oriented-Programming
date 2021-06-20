#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "Fornecedor.hpp"
#include <vector>
#include <string>
#ifndef Menu_hpp
#define Menu_hpp

class Menu{

public:
    Menu();
    void menuPrincipal();
//------------------------------------------------ 

    void menuAdministrador();
    void menuOperario();
    void menuVendedor();
    void menuFornecedor();

    void criaAdministrador();
    void criaOperario();
    void criaVendedor();
    void criaFornecedor();

    void setAdministrador(string nome, string telefone, string rua, string cidade, int numero);
    void setOperario(string nome, string telefone, string rua, string cidade, int numero);
    void setVendedor(string nome, string telefone, string rua, string cidade, int numero, int valorDeVenda);
    void setFornecedor(string nome, string telefone, string rua, string cidade, int numero, float divida, float credito);
//------------------------------------------------

    void menuAtualizacaoAdministrador(int i);
    void menuAtualizacaoOperario(int i);
    void menuAtualizacaoVendedor(int i);
    void menuAtualizacaoFornecedor(int i);

    void atualizaAdministrador(int id);
    void atualizaOperario(int id);
    void atualizaVendedor(int id);
    void atualizaFornecedor(int id);
//-------------------------------------------------  

    void buscaAdministrador(int id);
    void buscaOperario(int id);
    void buscaVendedor(int id);
    void buscaFornecedor(int id);

//-------------------------------------------------

    void imprimeListaCompleta();
    void imprimeListaAdministrador();
    void imprimeListaOperario();
    void imprimeListaVendedor();
    void imprimeListaFornecedor();

private: 
    vector<Operario> operario;
    vector<Administrador> administrador;
    vector<Vendedor> vendedor;
    vector<Fornecedor> fornecedor;
};

#endif // Menu_hpp