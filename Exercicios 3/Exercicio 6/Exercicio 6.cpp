// Exercicio 6.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	bool teste

	cout << "Insira um n�mero: ";
	cin >> numero;

	for (int contador = numero; contador <= numero; contador--) {
		if (numero % contador != 1 && numero % contador != 2) {
			teste = true;
		}
	}

}
