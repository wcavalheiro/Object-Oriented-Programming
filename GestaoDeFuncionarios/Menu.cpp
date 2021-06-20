#include "Menu.hpp"

Menu::Menu()
{
    menuPrincipal();
}

void Menu::menuPrincipal()
{
    int menu = 0;

    while (menu != 7) 
    {
        cout << "------------------------------------------------------" << endl;
        cout << "---------- Empresa Cavalheiro, Moura e Neto ----------" << endl;
        cout << "------------------------------------------------------\n" << endl;

        cout << "1-> Menu Administradores" << endl;
        cout << "2-> Menu Operarios" << endl;
        cout << "3-> Menu Vendedores" << endl;
        cout << "4-> Menu Fornecedores" << endl;
        cout << "5-> Imprimir todos os Funcionarios" << endl;
        cout << "6-> Imprimir todos os Fornecedores" << endl;
        cout << "7-> Encerrar o programa." << endl;
        cin >> menu; cin.ignore();
        system("cls");

        switch (menu)
        {
        case 1:
            menuAdministrador();
            break;
        case 2:
            menuOperario();
            break;
        case 3:
            menuVendedor();
            break;
        case 4:
            menuFornecedor();
            break;
        case 5:
            imprimeListaCompleta();
            break;
        case 6:
            imprimeListaFornecedor();
            break;
        case 7:
            exit(1);
        default:
            cout << "Valor invalido!\n\nInsira um valor valido para continuar!\n" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}

void Menu::menuAdministrador() 
{
    int menu = 0, id;

    while (menu != 5)
    {
        cout << "1-> Incluir Administrador" << endl;
        cout << "2-> Atualizar Administrador" << endl;
        cout << "3-> Imprimir lista completa Admistradores" << endl;
        cout << "4-> Buscar funcionario" << endl;
        cout << "5-> Retornar ao menu principal" << endl;
        cin >> menu; cin.ignore();
        system("cls");

        switch (menu)
        {
        case 1:
            criaAdministrador();
            break;
        case 2:
            cout << "Informe o ID do funcionario: "; cin >> id; cin.ignore();
            atualizaAdministrador(id);
            break;
        case 3:
            imprimeListaAdministrador();
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "Informe o ID do funcionario: "; cin >> id; cin.ignore();
            buscaAdministrador(id);
            break;
        case 5:
            menuPrincipal();
            exit(1);
        default:
            cout << "Valor invalido!\n\nInsira um valor valido para continuar!\n" << endl;
            system("pause");
            system("cls");
            break;
        }
    } 
}

void Menu::menuOperario()
{
    int menu=0, id;

    while (menu != 5)
    {
        cout << "1-> Incluir Operario"                 << endl;
        cout << "2-> Atualizar Operario"               << endl;
        cout << "3-> Imprimir lista completa Operario" << endl;
        cout << "4-> Buscar funcionario" << endl;
        cout << "5-> Retornar ao menu principal"       << endl;
        cin >> menu; cin.ignore();
        system("cls");

        switch (menu)
        {
        case 1:
            criaOperario();
            break;
        case 2:
            cout << "Informe o ID do funcionario: "; cin >> id; cin.ignore();
            atualizaOperario(id);
            break;
        case 3:
            imprimeListaOperario();
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "Informe o ID do funcionario: "; cin >> id; cin.ignore();
            buscaOperario(id);
            break;
        case 5:
            menuPrincipal();
            exit(1);
        default:
            cout << "Valor invalido!\n\nInsira um valor valido para continuar!\n" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}

void Menu::menuVendedor() 
{
    int menu = 0, id;

    while (menu != 5)
    {
        cout << "1-> Incluir Vendedores"                 << endl;
        cout << "2-> Atualizar Vendedores"               << endl;
        cout << "3-> Imprimir lista completa Vendedores" << endl;
        cout << "4-> Buscar funcionario" << endl;
        cout << "5-> Retornar ao menu principal"         << endl;
        cin >> menu; cin.ignore();
        system("cls");

        switch (menu)
        {
        case 1:
            criaVendedor();
            break;
        case 2:
            cout << "Informe o ID do funcionario: "; cin >> id; cin.ignore();
            atualizaVendedor(id);
            break;
        case 3:
            imprimeListaVendedor();
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "Informe o ID do funcionario: "; cin >> id; cin.ignore();
            buscaVendedor(id);
            break;
        case 5:
            menuPrincipal();
            exit(1);
        default:
            cout << "Valor invalido!\n\nInsira um valor valido para continuar!\n" << endl;
            system("pause");
            system("cls");
            break;
        }
    } 
}

void Menu::menuFornecedor()
{
    int menu = 0, id;

    while (menu != 5)
    {
        cout << "1-> Incluir Fornecedor"             << endl;
        cout << "2-> Atualizar Fornecedor"           << endl;
        cout << "3-> Imprimir lista de Fornecedores" << endl;
        cout << "4-> Buscar Fornecedores" << endl;
        cout << "5-> Retornar ao menu principal."    << endl;
        cin >> menu; cin.ignore();
        system("cls");

        switch (menu)
        {
        case 1:
            criaFornecedor();
            break;
        case 2:
            cout << "Informe o ID do Fornecedor: "; cin >> id; cin.ignore();
            atualizaFornecedor(id);
            break;
        case 3:
            imprimeListaFornecedor();
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "Informe o ID do funcionario: "; cin >> id; cin.ignore();
            buscaFornecedor(id);
            break;
        case 5:
            menuPrincipal();
            exit(1);
        default:
            cout << "Valor invalido!\n\nInsira um valor valido para continuar!\n" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}

void Menu::criaAdministrador()
{   
    string nome, telefone, rua, cidade; 
    int numero, contVector = administrador.size();

    cout << "Nome......: "; getline(cin, nome);
    cout << "Telefone..: "; getline(cin, telefone);
    cout << "Rua.......: "; getline(cin, rua);
    cout << "Numero....: "; cin >> numero; cin.ignore();
    cout << "Cidade....: "; getline(cin, cidade);

    setAdministrador(nome, telefone, rua, cidade, numero);

    if (administrador.empty() == true)
    {
        cout << "\nFalha na criação!" << endl;
    }
    else if (administrador.size() <= contVector) 
    {
        cout << "\nFalha na criação!" << endl;
    } else
    {
        cout << "\nAdministrador criado com sucesso!\n" << endl;
        system("pause");
        system("cls");
    }
        //cout << "Deseja criar mais um usuário (1)->SIM (2)->NAO: "; cin >> menu;
}

void Menu::criaOperario()
{
    string nome, telefone, rua, cidade;
    int numero, contVector = operario.size();

    cout << "Nome......: "; getline(cin, nome);
    cout << "Telefone..: "; getline(cin, telefone);
    cout << "Rua.......: "; getline(cin, rua);
    cout << "Numero....: "; cin >> numero; cin.ignore();
    cout << "Cidade....: "; getline(cin, cidade);
    

    setOperario(nome, telefone, rua, cidade, numero);

    if (operario.empty() == true)
    {
        cout << "\nFalha na criação!" << endl;
    }
    else if (operario.size() <= contVector)
    {
        cout << "\nFalha na criação!" << endl;
    }
    else 
    {
        cout << "\nOperario criado com sucesso!" << endl;
        system("pause");
        system("cls");
    }
}
   
void Menu::criaVendedor()
{
    string nome, telefone, rua, cidade;
    int numero, valorDeVenda, contVector = vendedor.size();


    cout << "Nome............: "; getline(cin, nome);
    cout << "Telefone........: "; getline(cin, telefone);
    cout << "Rua.............: "; getline(cin, rua);
    cout << "Numero..........: "; cin >> numero; cin.ignore();
    cout << "Cidade..........: "; getline(cin, cidade);
    cout << "Valor de vendas.: "; cin >> valorDeVenda; cin.ignore(); 

    setVendedor(nome, telefone, rua, cidade, numero, valorDeVenda);

    if (vendedor.empty() == true)
    {
        cout << "\nFalha na criação!" << endl;
    }
    else if (vendedor.size() <= contVector)
    {
        cout << "\nFalha na criação!" << endl;
    }
    else 
    {
        cout << "\nVendedor criado com sucesso!" << endl;
        system("pause");
        system("cls");
    }
}

void Menu::criaFornecedor()
{
    string nome, telefone, rua, cidade;
    int numero, contVector = fornecedor.size();
    float credito, divida;
    
    cout << "Nome............: "; getline(cin, nome);
    cout << "Telefone........: "; getline(cin, telefone);
    cout << "Rua.............: "; getline(cin, rua);
    cout << "Numero..........: "; cin >> numero; cin.ignore();
    cout << "Cidade..........: "; getline(cin, cidade);
    cout << "Credito.........: "; cin >> credito; cin.ignore();
    cout << "Divida..........: "; cin >> divida; cin.ignore();

    setFornecedor(nome, telefone, rua, cidade, numero, credito, divida);

    if (fornecedor.empty() == true)
    {
        cout << "\nFalha na criação!" << endl;
    }
    else if (fornecedor.size() <= contVector)
    {
        cout << "\nFalha na criação!" << endl;
    }
    else 
    {
        cout << "\nFornecedor criado com sucesso!" << endl;
        system("pause");
        system("cls");
    }
}

void Menu::atualizaAdministrador(int id)
{
    for(int i = 0; i < administrador.size(); i++)
    {
        if(administrador[i].getID() == id)
        {
            menuAtualizacaoAdministrador(i);
        }
    }
}

void Menu::atualizaOperario(int id)
{
    for(int i = 0; i < operario.size(); i++)
    {
        if(operario[i].getID() == id)
        {
            menuAtualizacaoOperario(i);
        }
    }
}

void Menu::atualizaVendedor(int id)
{
    for(int i = 0; i < vendedor.size(); i++)
    {
        if(vendedor[i].getID() == id)
        {
            menuAtualizacaoVendedor(i);
        }
    }
}

void Menu::atualizaFornecedor(int id)
{
    for(int i = 0; i < fornecedor.size(); i++)
    {
        if(fornecedor[i].getID() == id)
        {
            menuAtualizacaoFornecedor(i);
        }
    }
}

void Menu::menuAtualizacaoAdministrador(int i)
{
    string nome, telefone, rua, cidade;
    int numero, valorDeVenda, menu = 0;

    while (menu != 7)
    {
        cout << "O que deseja alterar:" << endl;
        cout << "1-> Nome" << endl;
        cout << "2-> Telefone" << endl;
        cout << "3-> Rua" << endl;
        cout << "4-> Numero" << endl;
        cout << "5-> Cidade" << endl;
        cout << "6-> Imprimir o funcionario" << endl;
        cout << "7-> Retornar " << endl;
        cin >> menu; cin.ignore();
        system("cls");

        switch (menu)
        {
        case 1:
            cout << "Novo nome: "; getline(cin, nome);
            administrador[i].setNome(nome);
            break;
        case 2:
            cout << "Novo Telefone: "; getline(cin, telefone);
            administrador[i].setTelefone(telefone);
            break;
        case 3:
            cout << "Novo Rua: "; getline(cin, rua);
            administrador[i].setRua(rua);
            break;
        case 4:
            cout << "Novo Numero: "; cin >> numero; cin.ignore();
            administrador[i].setNumero(numero);
            break;
        case 5:
            cout << "Nova Cidade: "; getline(cin, cidade);
            administrador[i].setCidade(cidade);
            break;
        case 6:
            imprimeListaAdministrador();
            break;
        case 7:
            menuAdministrador();
        default:
            cout << "Valor invalido!\n\nInsira um valor valido para continuar!\n" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}

void Menu::menuAtualizacaoOperario(int i)
{
    string nome, telefone, rua, cidade;
    int numero, menu = 0;

    while (menu != 7)
    {
        cout << "O que deseja alterar:" << endl;
        cout << "1-> Nome" << endl;
        cout << "2-> Telefone" << endl;
        cout << "3-> Rua" << endl;
        cout << "4-> Numero" << endl;
        cout << "5-> Cidade" << endl;
        cout << "6-> Imprimir o funcionario" << endl;
        cout << "7-> Retornar " << endl;
        cin >> menu; cin.ignore();
        system("cls");

        switch (menu)
        {
        case 1:
            cout << "Novo nome: "; getline(cin, nome);
            operario[i].setNome(nome);
            break;
        case 2:
            cout << "Novo Telefone: "; getline(cin, telefone);
            operario[i].setTelefone(telefone);
            break;
        case 3:
            cout << "Novo Rua: "; getline(cin, rua);
            operario[i].setRua(rua);
            break;
        case 4:
            cout << "Novo Numero: "; cin >> numero; cin.ignore();
            operario[i].setNumero(numero);
            break;
        case 5:
            cout << "Nova Cidade: "; getline(cin, cidade);
            operario[i].setCidade(cidade);
            break;
        case 6:
            imprimeListaOperario();
            break;
        case 7:
            menuOperario();
        default:
            cout << "Valor invalido!\n\nInsira um valor valido para continuar!\n" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}

void Menu::menuAtualizacaoVendedor(int i)
{
    string nome, telefone, rua, cidade;
    int numero, menu = 0;

    while (menu != 7)
    {
        cout << "O que deseja alterar:" << endl;
        cout << "1-> Nome" << endl;
        cout << "2-> Telefone" << endl;
        cout << "3-> Rua" << endl;
        cout << "4-> Numero" << endl;
        cout << "5-> Cidade" << endl;
        cout << "6-> Imprimir o funcionario" << endl;
        cout << "7-> Retornar " << endl;
        cin >> menu; cin.ignore();
        system("cls");

        switch (menu)
        {
        case 1:
            cout << "Novo nome: "; getline(cin, nome);
            vendedor[i].setNome(nome);
            break;
        case 2:
            cout << "Novo Telefone: "; getline(cin, telefone);
            vendedor[i].setTelefone(telefone);
            break;
        case 3:
            cout << "Novo Rua: "; getline(cin, rua);
            vendedor[i].setRua(rua);
            break;
        case 4:
            cout << "Novo Numero: "; cin >> numero; cin.ignore();
            vendedor[i].setNumero(numero);
            break;
        case 5:
            cout << "Nova Cidade: "; getline(cin, cidade);
            vendedor[i].setCidade(cidade);
            break;
        case 6:
            imprimeListaVendedor();
            break;
        case 7:
            menuVendedor();
        default:
            cout << "Valor invalido!\n\nInsira um valor valido para continuar!\n" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}

void Menu::menuAtualizacaoFornecedor(int i)
{
    string nome, telefone, rua, cidade;
    int numero, menu = 0;

    while (menu != 7)
    {
        cout << "O que deseja alterar:" << endl;
        cout << "1-> Nome" << endl;
        cout << "2-> Telefone" << endl;
        cout << "3-> Rua" << endl;
        cout << "4-> Numero" << endl;
        cout << "5-> Cidade" << endl;
        cout << "6-> Imprimir o fornecedor" << endl;
        cout << "7-> Retornar " << endl;
        cin >> menu; cin.ignore();
        system("cls");

        switch (menu)
        {
        case 1:
            cout << "Novo nome: "; getline(cin, nome);
            fornecedor[i].setNome(nome);
            break;
        case 2:
            cout << "Novo Telefone: "; getline(cin, telefone);
            fornecedor[i].setTelefone(telefone);
            break;
        case 3:
            cout << "Novo Rua: "; getline(cin, rua);
            fornecedor[i].setRua(rua);
            break;
        case 4:
            cout << "Novo Numero: "; cin >> numero; cin.ignore();
            fornecedor[i].setNumero(numero);
            break;
        case 5:
            cout << "Nova Cidade: "; getline(cin, cidade);
            fornecedor[i].setCidade(cidade);
            break;
        case 6:
            imprimeListaFornecedor();
            break;
        case 7:
            menuFornecedor();
        default:
            cout << "Valor invalido!\n\nInsira um valor valido para continuar!\n" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}

void Menu::setAdministrador(string nome, string telefone, string rua, string cidade, int numero)
{
    administrador.push_back(Administrador(nome, telefone, rua, cidade, numero));
}

void Menu::setOperario(string nome, string telefone, string rua, string cidade, int numero)
{
    operario.push_back(Operario(nome, telefone, rua, cidade, numero));
}

void Menu::setVendedor(string nome, string telefone, string rua, string cidade, int numero, int valorDeVenda)
{
    vendedor.push_back(Vendedor(nome, telefone, rua, cidade, numero, valorDeVenda));
}

void Menu::setFornecedor(string nome, string telefone, string rua, string cidade, int numero, float divida, float credito)
{   
    fornecedor.push_back(Fornecedor(nome, telefone, rua, cidade, numero, divida, credito));
}

void Menu::buscaAdministrador(int id)
{
    for (int i = 0; i < administrador.size(); i++)
    {
        if (administrador[i].getID() == id)
        {
            administrador[i].detalhesAdministrador();
        }else
        {
            cout << "\nID nao identificado!\n" << endl;
        }
    }
}

void Menu::buscaOperario(int id)
{
    for (int i = 0; i < operario.size(); i++)
    {
        if (operario[i].getID() == id)
        {
            operario[i].detalhesOperario();
        }else 
        {
            cout << "\nID nao identificado! \n" << endl;
        }
    }
}

void Menu::buscaVendedor(int id)
{
    for (int i = 0; i < vendedor.size(); i++)
    {
        if (vendedor[i].getID() == id)
        {
            vendedor[i].detalhesVendedor();
        }else 
        {
            cout << "\nID nao identificado! \n" << endl;
        }
    }
}

void Menu::buscaFornecedor(int id)
{
    for (int i = 0; i < fornecedor.size(); i++)
    {
        if (fornecedor[i].getID() == id)
        {
            fornecedor[i].detalhesFornecedor();
        }else 
        {
            cout << "\nID nao identificado! \n" << endl;
        }
    }
}

void Menu::imprimeListaCompleta()
{   
    cout << "\n ------------------------ ADMINISTRADORES ------------------------" << endl;
    if (administrador.empty() == true) 
    {
        cout << "Voce nao possui administradores." << endl;
    }
    else 
    {
        for (int i = 0; i < administrador.size(); i++)
        {
            administrador[i].detalhesAdministrador();
        }
    }
    
    cout << "\n ------------------------ OPERARIOS ------------------------" << endl;
    if (operario.empty() == true)
    {
        cout << "Voce nao possui operarios." << endl;
    }
    else 
    {
        for (int i = 0; i < operario.size(); i++)
        {
            operario[i].detalhesOperario();
        }
    }
   
    cout << "\n ------------------------ VENDEDORES ------------------------" << endl;
    
    if (operario.empty() == true)
    {
        cout << "Voce nao possui vendedores." << endl;
    }
    else
    {
        for (int i = 0; i < vendedor.size(); i++)
        {
            vendedor[i].detalhesVendedor();
        }
    }
}

void Menu::imprimeListaAdministrador()
{
    cout << "\n ------------------------ ADMINISTRADORES ------------------------" << endl;
    if (administrador.empty() == true)
    {
        cout << "\nVoce nao possui administradores.\n" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        for (int i = 0; i < administrador.size(); i++)
        {
            cout << "\n";
            administrador[i].detalhesAdministrador();
        }
    }
}

void Menu::imprimeListaOperario()
{
    cout << "\n ------------------------ OPERARIOS ------------------------" << endl;
    if (operario.empty() == true)
    {
        cout << "\nVoce nao possui operarios.\n" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        for (int i = 0; i < operario.size(); i++)
        {
            cout << "\n";
            operario[i].detalhesOperario();
        }
    }
}

void Menu::imprimeListaVendedor()
{
    cout << "\n ------------------------ VENDEDORES ------------------------" << endl;

    if (vendedor.empty() == true)
    {
        cout << "\nVoce nao possui vendedores.\n" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        for (int i = 0; i < vendedor.size(); i++)
        {
            cout << "\n";
            vendedor[i].detalhesVendedor();
        }
    }
}

void Menu::imprimeListaFornecedor()
{
    cout << "\n ------------------------ FORNECEDORES ------------------------" << endl;

    if (fornecedor.empty() == true)
    {
        cout << "\nVoce nao possui Fornecedores no momento.\n" << endl;
        system("pause");
        system("cls");
    }
    else
    {
        for (int i = 0; i < fornecedor.size(); i++)
        {
            cout << "\n";
            fornecedor[i].detalhesFornecedor();
        }
    }
}
    
