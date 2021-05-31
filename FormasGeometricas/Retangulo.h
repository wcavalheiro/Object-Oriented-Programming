#ifndef Retangulo_h
#define	Retangulo_h
#include "FormaGeometrica.h"

class Retangulo : public FormaGeometrica
{
private:
	float b;
	float h;

public:
	Retangulo(float b, float h);

	void CalculaArea();
	void detalhes();
};

#endif // Retangulo_h
