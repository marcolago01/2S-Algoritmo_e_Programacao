// Exercicio 1.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

//criar um array de 50 posições 
//preencher com numeros aleatórios de 0 a 100
//exibir de 3 maneiras:
	//Original
	//Crescente
	//Decresente
int main()
{
	srand(time(NULL));
	const int POSICOES = 50;
	int vetor[POSICOES];

	//preenchendo o vetor e exibindo ele
	for (int posicao = 0; posicao < POSICOES; posicao++) {
		vetor[posicao] = rand() % 101;
		cout << vetor[posicao] << "\t";
	}

	//Ordenando em ordem crescente utilizando o Burble Sort
	for (int ciclo = 0; ciclo < POSICOES; ciclo++) {
		int aux = 0;
		for (int posicao = 0; posicao < POSICOES-1; posicao++) {
			if (vetor[posicao] > vetor[posicao + 1]) {
				aux = vetor[posicao];
				vetor[posicao] = vetor[posicao + 1];
				vetor[posicao + 1] = aux;
			}
		}
	}

	//exibindo o array organizado em ordem crescente
	cout << endl << "Crescente" << endl;
	for (int posicao = 0; posicao < POSICOES; posicao++) {
		cout << vetor[posicao] << "\t";
	}

	//Ordenando em ordem decresente utilizando o Burble Sort
	for (int ciclo = 0; ciclo < POSICOES; ciclo++) {
		int aux = 0;
		for (int posicao = 0; posicao < POSICOES-1; posicao++) {
			if (vetor[posicao] < vetor[posicao + 1]) {
				aux = vetor[posicao];
				vetor[posicao] = vetor[posicao + 1];
				vetor[posicao + 1] = aux;
			}
		}
	}

	//exibindo o array organizado em ordem decrescente
	cout << endl << "Decrescente" << endl;
	for (int posicao = 0; posicao < POSICOES; posicao++) {
		cout << vetor[posicao] << "\t";
	}
}

