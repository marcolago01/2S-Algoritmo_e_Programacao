// Exercicio4.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Faça uma função que recebe um número inteiro 
//por parâmetro e retorna verdadeiro se for par
//e falso se for ímpar

bool par_impar(int numero);

int main()
{
	int numero;

	cout << "Insira um numero: ";
	cin >> numero;

	if (par_impar(numero)) {
		cout << "Verdadeiro";
	}
	else {
		cout << "Falso";
	}
}

bool par_impar(int numero) {
	if (numero % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
