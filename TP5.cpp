/*
*Perimetro de un Rectangulo
*Dinardi, Emiliano
*06/06/2015
*/

#include <iostream>
using namespace std;

double ObtenerNumero();
double CalcularPerimetro(double a, double b);

int main() {
	double a,b;
	a = ObtenerNumero();
	b = ObtenerNumero();
	cout << "El perimetro del rectangulo es: " << (CalcularPerimetro(a,b));
}

double ObtenerNumero(){
	double c;
	do{
		cout << "Ingrese un Numero \n";
		cin >> c;
	}while(c<0);
	return c;
}

double CalcularPerimetro(double a, double b){
	double per = (2*(a+b));
	return per;
}
