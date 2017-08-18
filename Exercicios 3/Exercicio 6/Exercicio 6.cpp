// Exercicio 6.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	int primo = 1;
	int teste;

	cout << "Insira um número: ";
	cin >> numero;

	for (int contador = 2; contador <= numero; contador++) {
		for (int multiplicador = 2; multiplicador <= contador; multiplicador++) {
			if (contador % multiplicador == 0 && contador / multiplicador != 1) {
				primo == 0;
			}
		}
		if (primo == 1) {
			cout << contador << " ";
		}
		else {
			primo = 1;
		}
	}
}
