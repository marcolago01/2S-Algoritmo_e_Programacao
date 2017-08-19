// Exercicio 14.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

//Criar uma Matriz 5x5 com numeros aleatórios de 0 a 100
//Exibir Matriz
//Criar vetor com 5 posições, com valores da diagonal principal e exibir
int main()
{
	//Criando e definindo variaveis
	srand(time(NULL));
	const int
		POSICOES = 5;
	int
		matriz[POSICOES][POSICOES],
		vetor[POSICOES];

	//preenchendo a matriz e exibindo.
	//preenchendo o vetor com os valores da diagonal principal
	for (int linha = 0; linha < POSICOES; linha++) {
		for (int coluna = 0; coluna < POSICOES; coluna++) {

			//Gerando os numeros
			matriz[linha][coluna] = rand() % 101;

			//Exibindo matriz
			cout << matriz[linha][coluna] << "\t";

			//Preenchendo o vetor
			if (linha == coluna) {
				vetor[linha] = matriz[linha][coluna];
			}
		}
		cout << endl;
	}
	
	//exibindo o vetor
	cout << endl;
	for (int posicao = 0; posicao < POSICOES; posicao++) {
		cout << vetor[posicao] << "\t";
	}
	cout << endl;
}

