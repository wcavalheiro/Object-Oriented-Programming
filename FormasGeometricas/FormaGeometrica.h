#ifndef FormaGeometrica_h
#define	FormaGeometrica_h
#include <iostream>

using namespace std;

class FormaGeometrica 
{
protected: 
	float area;

public: 
	FormaGeometrica() {};
	
	void setArea(float area);
	float getArea();

	virtual void CalculaArea() = 0;

	
};


#endif // !FormaGeometrica_h

