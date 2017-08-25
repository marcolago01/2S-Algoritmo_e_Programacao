// AC1-M1.cpp : Define o ponto de entrada para a aplicação de console.
//

//Incluindo bibliotecas a ser utilizada
#include "stdafx.h"
#include "arrays.h"
#include <iostream>
#include <time.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	const int TAMANHO_VETOR = 40;
	int vetor[TAMANHO_VETOR] = { 0 };
	int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ] = { 0 };

	/*
	//preencher um vetor com numeros aleatórios e exibir
	for (int contador = 0; contador < TAMANHO_VETOR; contador++) {
		vetor[contador] = rand() % 151;
		cout << vetor[contador] << "  ";
	}
	cout << endl << endl;
	*/

	//Preencher Matriz
	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
			matriz[linha][coluna] = rand() % 201;
			cout << matriz[linha][coluna] << "\t";
		}
		cout << endl;
	}

	//bubbleSort(vetor, TAMANHO_VETOR, true);
	//cout << maiorValorEmVetor << endl;
	//cout << menorValorEmVetor;
	
	/*
	//Teste maior valor Matriz
	cout << endl <<
		"O Maior valor é: " <<
		maiorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_COMPLETA) << endl;
	*/

}

