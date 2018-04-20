 #pragma once
#ifndef tabuleiro_h
#define tabuleiro_h

#include <iostream>
using namespace std;

/*
Realiza a exibição do tabuleiro no seguinte formato:

	1  2  3
1	L  L  L
2	L  L  L
3   L  L  L 

Tem a exibição de Legenda para facilitar a jogatina.
*/
void renderizar_tabuleiro(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO],char play1,char play2) {
	cout << endl
		<< "Legenda: " << endl
		<< "L = Local Livre" << endl
		<< play1 << " = Player1" << endl
		<< play2 << " = Player2" << endl << endl;

	cout << "\t"
		<< "1" << "  "
		<< "2" << "  "
		<< "3" << endl << endl;

	for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
		cout << linha + 1 << "\t";
		for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
			cout << tabuleiro[linha][coluna] << "  ";
		}
		cout << endl;
	}
}
#endif