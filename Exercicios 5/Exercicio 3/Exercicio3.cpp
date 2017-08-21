// Exercicio3.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Insirir um numero e retornar o dobro
	//utilizar uma função pra isso

//declarando funções
int dobro(int numero);

int main()
{
	int numero;

	cout << "Insira um numero: ";
	cin >> numero;
	cout << dobro(numero);
}

int dobro(int numero) {
	return numero * 2;
}

