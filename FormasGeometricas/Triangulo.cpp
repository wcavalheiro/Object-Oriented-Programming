#include "Triangulo.h"

Triangulo::Triangulo(float b, float h)
{
	this->b = b;
	this->h = h;
	CalculaArea();
}

void Triangulo::CalculaArea()
{
	float resultado;
	resultado = (b * h) / 2;
	setArea(resultado);
}

void Triangulo::detalhes()
{
	cout << "Triangulo" << endl;
	cout << "Base....: " << b << endl;
	cout << "Altura..: " << h << endl;
	cout << fixed;
	cout.precision(2);
	cout << "Area....: " << getArea() << " cm quadrados" << endl;
}
