#pragma once
#include <sstream> 
#include <iostream>

using namespace std;
class Fraccion
{
private:
	int dividendo;
	int divisor;
public:
	Fraccion(int, int);

	int getDividendo()const;
	int getDivisor()const;
	void setDividendo(int);
	void setDivisor(int);
	
	std::string toString() const;

	double evaluar();
	void simplificar();
};

ostream& operator<< (ostream&,const Fraccion&);
Fraccion operator+(const Fraccion&, const Fraccion&);
Fraccion operator-(const Fraccion&, const Fraccion&);
Fraccion operator*(const Fraccion&, const Fraccion&);
Fraccion operator/(const Fraccion&, const Fraccion&);