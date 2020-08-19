#include "Fraccion.h"

using namespace std;
Fraccion::Fraccion(int divid, int divis) {
	this -> dividendo = divid;
	this -> divisor = divis;
}

int Fraccion::getDividendo() const {
	return dividendo;
}
int Fraccion::getDivisor() const {
	return divisor;
}
void Fraccion::setDividendo(int a) {
	dividendo = a;
}
void Fraccion::setDivisor(int a) {
	divisor = a;
}

string Fraccion::toString() const {
	stringstream x;
	if (divisor != 0)
		x << dividendo << "/" << divisor;
	else
		x << "inefinido";
	return x.str();
}

double Fraccion::evaluar() {
	if (dividendo == 0) {
		cerr << 0;
		return 0;
	}
	else
		return 	(double)dividendo / (double)divisor;
}

void Fraccion::simplificar() {
	int cont = 1;
	while ((cont <= dividendo) && (cont <= divisor)) {
		if ((dividendo % cont == 0) && divisor % cont == 0) {
			dividendo = dividendo / cont;
			divisor = divisor / cont;
			cont = 1;
		}
		cont++;
	}
}

ostream& operator<<(ostream& out, const Fraccion& f1)
{
		out << f1.toString();
		return out;
}

Fraccion operator+(const Fraccion& f1, const Fraccion& f2) {
	return Fraccion((f1.getDividendo() * f2.getDivisor() + f2.getDividendo() * f1.getDivisor()), (f1.getDivisor() * f2.getDivisor()));
}
Fraccion operator-(const Fraccion& f1, const Fraccion& f2) {
	return Fraccion((f1.getDividendo() * f2.getDivisor() - f2.getDividendo() * f1.getDivisor()), (f1.getDivisor() * f2.getDivisor()));
}
Fraccion operator*(const Fraccion& f1, const Fraccion& f2) {
	return Fraccion((f1.getDividendo() * f2.getDividendo()), (f1.getDivisor() * f2.getDivisor()));
}
Fraccion operator/(const Fraccion& f1, const Fraccion& f2) {
	return Fraccion((f1.getDividendo() * f2.getDivisor()), (f1.getDivisor() * f2.getDividendo()));
}
