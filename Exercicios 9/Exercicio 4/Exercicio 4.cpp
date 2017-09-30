// Exercicio 4.cpp : Defines the entry point for the console application.
//Faça um algoritmo recursivo que some os valores de um vetor.

#include "stdafx.h"
#include <iostream>
using namespace std;

int somaVetor(int tamanho, int vetor[]) {
	if (tamanho == 0) {
		return vetor[tamanho];
	}
	
	return vetor[tamanho] + somaVetor(tamanho - 1, vetor);
}

int main()
{
	const int TAMANHO = 3;
	int vetor[TAMANHO] = { 5,5,2 };

	cout << somaVetor(TAMANHO - 1, vetor) << endl;
}

