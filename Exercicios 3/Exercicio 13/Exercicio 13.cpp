// Exercicio 13.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

//Criar uma matriz 3x5
//preencher com numeros aleatórios de 0 a 500 e exibir
//Trocar numeros maiores que 100 por 0 e exibir novamente
int main()
{
	//Definindo variavéis
	srand(time(NULL));
	const int
		LINHAS = 3,
		COLUNAS = 5;
	int matriz[LINHAS][COLUNAS];
	
	//preenchendo a matriz com valores aleatórios e exibindo
	for (int linha = 0; linha < LINHAS; linha++) {
		for (int coluna = 0; coluna < COLUNAS; coluna++) {
			matriz[linha][coluna] = rand() % 501;
			cout << matriz[linha][coluna] << "\t";
		}
		cout << endl;
	}

	//Verificando números maiores 100 e substituindo por 0
	//Reexibindo a matriz novamente
	cout << endl;
	for (int linha = 0; linha < LINHAS; linha++) {
		for (int coluna = 0; coluna < COLUNAS; coluna++) {
			if (matriz[linha][coluna] > 100) {
				matriz[linha][coluna] = 0;
			}
			cout << matriz[linha][coluna] << "\t";
		}
		cout << endl;
	}
}

