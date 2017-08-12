// Exercicio_3-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numeros[10] = { 0 };
	int menor, maior;

	//Solicita a inserção dos números
	cout << "Insira 10 números:" << endl;
	for (int contador = 0; contador < 10; contador++) {
		cin >> numeros[contador];
	}

	//Realizar a verificação dos valores
	menor = numeros[0];
	maior = numeros[0];
	for (int contador = 0; contador < 10; contador++) {
		//Responsavel por descobrir o menor número
		if(menor > numeros[contador]) {
			menor = numeros[contador];
		}

		//Responsavel por descobrir o maior número
		if (maior < numeros[contador]) {
			maior = numeros[contador];
		}
	}

	cout << "Menor valor: " << menor << endl;
	cout << "Maior valor: " << maior;
}

