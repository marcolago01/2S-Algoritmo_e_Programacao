// Exercicio 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Criar 3 vetores de 10 posição
//Receber dados do usuario para 2 vetores
//Multiplicar mesmo indice e armazenar no terceiro vetor
int main()
{
	//Definindo variáveis
	setlocale(LC_ALL, "Portuguese");
	const int TAMANHO_V = 10;
	int
		vetor1[TAMANHO_V] = { 0 },
		vetor2[TAMANHO_V] = { 0 },
		vetor3[TAMANHO_V] = { 0 };

	//Solicitando dados para o usuario do primeiro vetor
	cout << "Insira 10 valores: " << endl;
	for (int aux = 0; aux < TAMANHO_V; aux++) {
		cin >> vetor1[aux];
	}

	//Solicitando dados para o usuario do segundo vetor
	cout << "Insira mais 10 valores: " << endl;
	for (int aux = 0; aux < TAMANHO_V; aux++) {
		cin >> vetor2[aux];
	}

	//Realizando a multiplicação
	for (int aux = 0; aux < TAMANHO_V; aux++) {
		vetor3[aux] = vetor1[aux] * vetor2[aux];
	}

	//Exibindo o terceiro Array
	for (int aux = 0; aux < TAMANHO_V; aux++) {
		cout << vetor3[aux] << "  ";
	}
}

