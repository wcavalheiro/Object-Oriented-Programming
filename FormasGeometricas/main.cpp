//
//		Created by Willian Cavalheiro da Silva Rodrigues on 30/05/2021
//		
//		Uniritter - Linguagem orientada a objetos - Vinicius Cassol 
//		Prova - Projeto Formas Geometricas 
//		Assunto: Polimorfismo 
//
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

int main ()
{
	Retangulo Q(4, 5);
	Triangulo T(3, 3);
	Circulo C(10);

	Q.detalhes();
	cout << endl;
	T.detalhes();
	cout << endl;
	C.detalhes();

	return 0;
}