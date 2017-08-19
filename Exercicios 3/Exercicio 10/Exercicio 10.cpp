// Exercicio 10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

//Criar vetor de 50 posi��es
//Insirir numeros aleat�rios
//Exibir:
//	Menor Valor
//	Indice do menor valor
//	Numero de pares e impares
int main()
{
	//Declarando Vari�veis
	srand(time(NULL));				//Gerando uma semente para gera��o de numeros aleat�rios	
	const int TAMANHO_V = 50;
	int
		vetor[TAMANHO_V] = { 0 },
		menor_valor = 0,
		indice_menor_valor = 0,
		impares = 0,
		pares = 0;

	for (int aux = 0; aux < TAMANHO_V; aux++) {
		vetor[aux] = rand() % 101;
	}

	//Definindo valor das variaveis de sa�da
	menor_valor = vetor[0];

	//'For' para encontrar os valores desejados pelo problema
	for (int aux = 0; aux < TAMANHO_V; aux++) {

		//Achar menor valor junto com o indice do menor valor
		if (menor_valor > vetor[aux]) {
			menor_valor = vetor[aux];
			indice_menor_valor = aux;
		}
		
		//Descobrir se o numero � impar ou par
		if (vetor[aux] % 2 == 0) {
			pares++;
		}
		else {
			impares++;
		}
	}

	//Exibindo resultado
	cout << "Menor valor: " << menor_valor << endl
		<< "Indice do menor valor: " << indice_menor_valor << endl
		<< "Pares: " << pares << endl
		<< "Impares: " << impares;
}

