// Exercicio 11.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Criar uma matriz 3x3
	//Preencher com numeros do usuario
	//exibir matriz preenchida
int main()
{
	const int
		COLUNAS = 3,
		LINHAS = 3;

	int matriz[LINHAS][COLUNAS];

	//Laço de repetição para preencher a matriz
	//solicintando ao usuario
	cout << "Insira 9 numeros: " << endl;
	for (int linha = 0; linha < LINHAS; linha++) {
		for (int coluna = 0; coluna < COLUNAS; coluna++) {
			cin >> matriz[linha][coluna];
		}
	}

	//exibir matriz
	for (int linha = 0; linha < LINHAS; linha++) {
		for (int coluna = 0; coluna < COLUNAS; coluna++) {
			cout << matriz[linha][coluna] << "  ";
		}
		cout << endl;
	}
}

