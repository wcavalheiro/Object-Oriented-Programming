#ifndef Triangulo_h
#define	Triangulo_h
#include "FormaGeometrica.h"

class Triangulo : public FormaGeometrica 
{
private:
	float b;
	float h;

public:
	Triangulo(float b, float h);

	void CalculaArea();
	void detalhes();
};

#endif // !Triangulo_h
