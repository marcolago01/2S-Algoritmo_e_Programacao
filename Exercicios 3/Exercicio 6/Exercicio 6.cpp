// Exercicio 6.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	int primo = 0;

	cout << "Insira um número: ";
	cin >> numero;

	for (int contador = 2; contador <= numero; contador++) {
		for (int multiplicador = 1; multiplicador <= contador; multiplicador++) {
			if ( contador % multiplicador == 0){
				primo++;
			}
			if (primo > 2) {
				break;
			}
		}
		if (primo == 2) {
			cout << contador << " ";
		}
		primo = 0;
	}
}
