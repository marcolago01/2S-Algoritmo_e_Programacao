#pragma once
#ifndef VALIDAR_JOGO_h
#define VALIDAR_JOGO_h

#include <iostream>
using namespace std;

/*
Faz a verificação se a jogada inserida pelo usuario esta dentro do padrão
	No intervalo de 1-3
	E se jogou em um lugar livre
*/
bool validar_jogada(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int linha, int coluna, char player1, char player2) {
	if (linha < 0 || linha > 2) {
		cout << endl
			<< "Linha inválida!" << endl
			<< "Verifique a linha inserida, só é aceito no intervalo de 1 à 3" << endl;
		return false;
	}
	else if (coluna < 0 || coluna>2) {
		cout << endl
			<< "Coluna inválida!" << endl
			<< "Verifique a coluna inserida, só é aceito no intervalo de 1 à 3" << endl;
		return false;
	}
	else if (tabuleiro[linha][coluna] == player1 || tabuleiro[linha][coluna] == player2) {
		cout << endl
			<< "Movimento inválido!" << endl
			<< "Já existe uma jogada no local desejado, selecione uma posição disponivel" << endl;
		return false;
	}
	else {
		cout << endl
			<< "Jogada Válida" << endl;
		return true;
	}
}

/*
Valida vitória na horizontal

    1  2  3
1	X  X  X
2	L  L  L
3   L  L  L
*/
bool VITORIA_HORIZONTAL(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], char player) {
	for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
		int vitoria = 0;
		for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
			if (tabuleiro[linha][coluna] == player) {
				vitoria++;
			}
		}
		if (vitoria == 3) {
			return true;
		}
	}
	return false;
}

/*
Valida vitória na vertical

    1  2  3
1	L  X  L
2	L  X  L
3   L  X  L
*/
bool VITORIA_VERTICAL(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], char player) {
	for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
		int vitoria = 0;
		for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
			if (tabuleiro[linha][coluna] == player) {
				vitoria++;
			}
		}
		if (vitoria == 3) {
			return true;
		}
	}
	return false;
}

/*
Valida vitória na diagonal principal

    1  2  3
1	X  L  L
2	L  X  L
3   L  L  X
*/
bool VITORIA_DIAGONAL_PRINCIPAL(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], char player) {
	int vitoria = 0;
	for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
		for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
			if (linha == coluna) {
				if (tabuleiro[linha][coluna] == player) {
					vitoria++;
				}
			}
		}
	}
	if (vitoria == 3) {
		return true;
	}
	else {
		return false;
	}
}

/*
Valida vitória na diagonal secundaria

    1  2  3
1	L  L  X
2	L  X  L
3   X  L  L
*/
bool VITORIA_DIAGONAL_SECUNDARIA(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], char player) {
	int vitoria = 0;
	for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
		for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
			if ((coluna + linha) == (TAM_TABULEIRO-1)) {
				if (tabuleiro[linha][coluna] == player) {
					vitoria++;
				}
			}
		}
	}
	if (vitoria == 3) {
		return true;
	}
	else {
		return false;
	}
}

/*
Verifica se todas as posições foram ocupadas, caso sim houve um empate
*/
bool EMPATE(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], char play1, char play2) {
	int empate = 0;
	for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
		for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
			if (tabuleiro[linha][coluna] == play1) {
				empate++;
			}
			else if (tabuleiro[linha][coluna] == play2) {
				empate++;
			}
		}
	}
	if (empate == 9) {
		return true;
	}
	else {
		return false;
	}
}

/*
Utiliza 4 Criterios de verificação para validar vitória
	Horizontal
	Vertical
	Diagonal Principal
	Diagonal Secundária
*/
bool verificar_vitoria(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], char player) {

	if (VITORIA_HORIZONTAL(tabuleiro, player)) {
		return true;
	}
	else if(VITORIA_VERTICAL(tabuleiro, player)) {
		return true;
	}
	else if (VITORIA_DIAGONAL_PRINCIPAL(tabuleiro, player)) {
		return true;
	}
	else if (VITORIA_DIAGONAL_SECUNDARIA(tabuleiro, player)) {
		return true;
	}
	else {
		return false;
	}
}

#endif // !VALIDAR_JOGO_H

