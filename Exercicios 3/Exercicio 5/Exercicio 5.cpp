// Exercicio 5.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;

	cout << "Insira um número: ";
	cin >> numero;

	if (numero % 2 == 0) {
		for (int contador = 0; contador < numero; contador = contador + 2) {
			cout << contador << "  ";
		}
	}
	else {
		for (int contador = 1; contador < numero; contador = contador + 2) {
			cout << contador << "  ";
		}
	}
}

