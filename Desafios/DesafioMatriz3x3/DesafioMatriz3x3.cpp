// DesafioMatriz3x3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

const int TAM_MATRIZ = 3;

void Config() {
	srand(time(NULL));
}

bool validacao(int matriz[TAM_MATRIZ][TAM_MATRIZ],int numeroGerado){

	for (int linha = 0; linha < TAM_MATRIZ; linha++) {
		for (int coluna = 0; coluna < TAM_MATRIZ; coluna++) {
			if (matriz[linha][coluna] == numeroGerado) {
				return false;
			}
		}
	}
	return true;
}

bool somasIguais(int matriz[TAM_MATRIZ][TAM_MATRIZ]) {
	bool
		linha1, linha2, linha3,
		coluna1, coluna2, coluna3,
		diagPrincipal, diagSecundaria;

	int soma;

	for (int linha = 0; linha < TAM_MATRIZ; linha++) {
		for (int coluna = 0; coluna < TAM_MATRIZ; linha++) {

		}
	}
}

int main()
{
	int matriz[TAM_MATRIZ][TAM_MATRIZ] = { 0 };

	Config();

	do {

		for (int linha = 0; linha < TAM_MATRIZ; linha++) {
			for (int coluna = 0; coluna < TAM_MATRIZ; coluna++) {
				do {
					matriz[linha][coluna] = rand() % 10;
				} while (validacao(matriz,matriz[linha][coluna]));
			}
		}
	} while ();
}

