// Exercicio 12.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Criar uma matriz 6x6
//preencher com 0 e 1
	//a diagonal principal deve ter 1 e as
	//outras posições devem ter 0
int main()
{
	const int LADOS = 6;
	int matriz[LADOS][LADOS];

	//preenchendo a matriz
	for (int linha = 0; linha < LADOS; linha++) {
		for (int coluna = 0; coluna < LADOS; coluna++) {
			if (linha == coluna) {
				matriz[linha][coluna] = 1;
			}
			else {
				matriz[linha][coluna] = 0;
			}
		}
	}

	//exibindo a matriz
	for (int linha = 0; linha < LADOS; linha++) {
		for (int coluna = 0; coluna < LADOS; coluna++) {
			cout << matriz[linha][coluna] << "  ";
		}
		cout << endl;
	}
}

