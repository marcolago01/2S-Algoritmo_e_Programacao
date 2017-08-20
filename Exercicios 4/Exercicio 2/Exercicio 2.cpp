// Exercicio 2.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

//Criar um array 5x5 com valores aleatórios
//Exibir Original, Crescente e Descrente
int main()
{
	//definindo variaveis
	srand(time(NULL));
	const int POSICAO = 5;
	int
		matriz[POSICAO][POSICAO] = { 0 },
		vetor[POSICAO*POSICAO] = { 0 },
		indice_vetor = 0;

	//preenchendo array 5x5 com numeros aleatórios
	//Inserindo os valores no vetor para organização
	//Exibindo na tela a matriz gerada.
	for (int linha = 0; linha < POSICAO; linha++) {
		for (int coluna = 0; coluna < POSICAO; coluna++) {
			matriz[linha][coluna] = rand() % 201;
			vetor[indice_vetor] = matriz[linha][coluna];
			indice_vetor++;
			cout << matriz[linha][coluna] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;



	//Organizando em ordem crescente o array
	for (int ciclo = 0; ciclo < POSICAO*POSICAO; ciclo++) {
		int aux = 0;
		for (int posicao = 0; posicao < POSICAO*POSICAO - 1; posicao++) {
			if (vetor[posicao] > vetor[posicao + 1]) {
				aux = vetor[posicao];
				vetor[posicao] = vetor[posicao + 1];
				vetor[posicao + 1] = aux;
			}
		}
	}
	//Jogando o array organizado para a matriz
	//Exibir a matriz organizada de forma crescente
	indice_vetor = 0;
	for (int linha = 0; linha < POSICAO; linha++) {
		for (int coluna = 0; coluna < POSICAO; coluna++) {
			matriz[linha][coluna] = vetor[indice_vetor];
			indice_vetor++;
			cout << matriz[linha][coluna] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;



	//Organizando em ordem decrescente o array
	for (int ciclo = 0; ciclo < POSICAO*POSICAO; ciclo++) {
		int aux = 0;
		for (int posicao = 0; posicao < POSICAO*POSICAO - 1; posicao++) {
			if (vetor[posicao] < vetor[posicao + 1]) {
				aux = vetor[posicao];
				vetor[posicao] = vetor[posicao + 1];
				vetor[posicao + 1] = aux;
			}
		}
	}

	//Jogando o array organizado para a matriz
	//Exibir a Matriz organizada de forma decresente
	indice_vetor = 0;
	for (int linha = 0; linha < POSICAO; linha++) {
		for (int coluna = 0; coluna < POSICAO; coluna++) {
			matriz[linha][coluna] = vetor[indice_vetor];
			indice_vetor++;
			cout << matriz[linha][coluna] << "\t";
		}
		cout << endl;
	}
}


