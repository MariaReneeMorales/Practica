#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	//Permite imprimir tildes, ñ o caracteres especiales. 
	setlocale(LC_ALL, "");
	
	//Definición de variables.
	float lnNumero1, lnNumero2, lnResultado;
	
	//Captura y lectura de datos (valores numéricos).
	cout << "— Ingrese el primer número: ";
	cin >> lnNumero1;
	cout << "— Ingrese el segundo número: ";
	cin >> lnNumero2;
	
	//Operación.
	lnResultado = lnNumero1 - lnNumero2;
	
	//Impresión de datos.
	cout << "— El resultado de " << lnNumero1 << " - " << lnNumero2 << " = " << lnResultado;
	return 0;
}
