// Exercicio 5.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	int pares=0, impares=0;

	cout << "Insira um número: ";
	cin >> numero;

	for (int contador = 0; contador <= numero; contador++) {
		if (contador % 2 == 0) {
			pares++;
		}
		else {
			impares++;
		}
	}
	cout << "Pares: " << pares << "\nImpares: " << impares;
}

