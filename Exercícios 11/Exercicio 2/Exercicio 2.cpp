/*
Crie uma estrutura para definir um elemento de uma matriz de valores
inteiros:

Valor
Linha
Coluna

Fa�a um programa que crie uma matriz(5x5) de n�meros �mpares aleat�rios.

Depois disso, sorteie 3 valores: um n�mero par e dois valores de 0 at� 4.

Utilize os dois valores (0-4) para definir a posi��o (linha e coluna) em que o
�nico n�mero par ser� inserido na matriz.

Por fim, fa�a um algoritmo que ir� percorrer a matriz e retornar� um valor
definido pela estrutura acima, contendo o n�mero par e sua respectiva posi��o.
*/

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

const int
	TAMANHO_MATRIZ = 5,
	PREENCHER_MATRIZ = 0,
	INSIRIR_NUMERO = 1,
	BUSCAR_NUMERO_PAR = 2,
	BUSCAR_LINHA_COLUNA_NUMERO_PAR = 3;

struct PosicaoMatriz {
	int 
		valor,
		linha,
		coluna;
};

/*
Op��es:

TAMANHO_MATRIZ = 5,
PREENCHER_MATRIZ = 0,
INSIRIR_NUMERO = 1,
BUSCAR_NUMERO_PAR = 2,
BUSCAR_LINHA_COLUNA_NUMERO_PAR = 3;
*/
void operacaoMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int opcao,int valor=2,int linhaPar=3,int colunaPar=3) {
	for (int linha = 0;linha < TAMANHO_MATRIZ;linha++) {
		for (int coluna = 0;coluna < TAMANHO_MATRIZ;coluna++) {
			switch (opcao)
			{
			case PREENCHER_MATRIZ:
				matriz[linha][coluna] = valor;
				break;
			case INSIRIR_NUMERO:
				matriz[linhaPar][colunaPar] = valor;
				return;
			case BUSCAR_NUMERO_PAR:
				if (matriz[linha][coluna] % 2 == 0) {
					cout << "Numero par da matriz: " << matriz[linha][coluna] << endl;
				}
				break;
			case BUSCAR_LINHA_COLUNA_NUMERO_PAR:
				if (matriz[linha][coluna] % 2 == 0) {
					cout << "Linha: " << linha << endl
						<< "Coluna: " << coluna << endl;
				}
			default:
				break;
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ] = {};
	
	PosicaoMatriz atributosMatriz;

	operacaoMatriz(matriz,PREENCHER_MATRIZ,1);

	do {
		atributosMatriz.valor = rand() % 10;
	} while (atributosMatriz.valor % 2 != 0);

	atributosMatriz.linha = rand() % 5;
	atributosMatriz.coluna = rand() % 5;

	operacaoMatriz(matriz, INSIRIR_NUMERO, atributosMatriz.valor,atributosMatriz.linha,atributosMatriz.coluna);
	operacaoMatriz(matriz, BUSCAR_NUMERO_PAR);
	operacaoMatriz(matriz, BUSCAR_LINHA_COLUNA_NUMERO_PAR);

}

