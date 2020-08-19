#include <iostream>
#include "Fraccion.h"
using namespace std;
int main() {
	int numeradora, denominadora;
	int numeradorb, denominadorb;
	cout << "Digite un numerador para la primera fraccion" << endl;
	cin >> numeradora;
	cout << "Digite un denominador para la primera fraccion" << endl;
	cin >> denominadora;
	system("cls");
	cout << "Digite un numerador para la segunda fraccion" << endl;
	cin >> numeradorb;
	cout << "Digite un denominador para la segunda fraccion" << endl;
	cin >> denominadorb;
	system("cls");

	Fraccion a(numeradora, denominadora);
	Fraccion b(numeradorb, denominadorb);

	cout << "Fraccion 1: " << a << endl;
	cout << "Fraccion 2: " << b << endl;
	cout << "\tf1 + f2: "<< a + b << endl;
	cout << "\tf1 - f2: " << a - b << endl;
	cout << "\tf1 * f2: " << a * b << endl;
	cout << "\tf1 / f2: " << a / b << endl;
	cout << "\tf1 = " << a.evaluar() << endl;
	cout << "\tf2 = " << b.evaluar() << endl;

	a.simplificar();
	b.simplificar();
	cout << "\tLa simplificacion de f1 es: " << a << endl;
	cout << "\tLa simplificacion de f2 es: " << b  << endl;
	system("pause");
	return 0;
}