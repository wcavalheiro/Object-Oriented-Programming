#ifndef Circulo_h
#define	Circulo_h
#include "FormaGeometrica.h"

class Circulo : public FormaGeometrica
{
private:
	float diametro;
	float raio;
	const float pi = 3.14;

public:
	Circulo(float diametro);

	void CalculaArea();
	void detalhes();
};

#endif // !Circulo_h

