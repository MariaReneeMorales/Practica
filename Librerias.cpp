#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	//Permite imprimir tildes, � o caracteres especiales. 
	setlocale(LC_ALL, "");
	
	//Definici�n de variables.
	float lnNumero1, lnNumero2, lnResultado;
	
	//Captura y lectura de datos (valores num�ricos).
	cout << "� Ingrese el primer n�mero: ";
	cin >> lnNumero1;
	cout << "� Ingrese el segundo n�mero: ";
	cin >> lnNumero2;
	
	//Operaci�n.
	lnResultado = lnNumero1 - lnNumero2;
	
	//Impresi�n de datos.
	cout << "� El resultado de " << lnNumero1 << " - " << lnNumero2 << " = " << lnResultado;
	return 0;
}
