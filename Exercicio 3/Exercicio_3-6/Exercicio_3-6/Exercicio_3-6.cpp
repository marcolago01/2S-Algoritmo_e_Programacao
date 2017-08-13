// Exercicio_3-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	bool teste

	cout << "Insira um número: ";
	cin >> numero;

	for (int contador = numero; contador <= numero; contador--) {
		if(numero % contador != 1 && numero % contador !=2) {
			teste = true;
		}
	}

}

