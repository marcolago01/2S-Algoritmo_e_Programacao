#pragma once

#include <iostream>
#include <time.h>
using namespace std;

const int TAMANHO_MAPA = 15;
const char CERCA = '#';
const char VAZIO = '\0';
const char CENTROPOKEMON = 'C';

struct CentroPokemon {
	int linha, coluna;
	char simbolo = CENTROPOKEMON;

	CentroPokemon(char mapa[TAMANHO_MAPA][TAMANHO_MAPA])
	{}

	CentroPokemon(int linha, int coluna) {
		this->linha = linha;
		this->coluna = coluna;
	}
};

bool verificarCampoVazio(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], int linha, int coluna) {
	return mapa[linha][coluna] == VAZIO;
}
void gerarPosicao(int &linha, int &coluna, int inicio = 0, int final = 14) {
	linha = (rand() % final) + inicio;
	coluna = (rand() % final) + inicio;
}
void renderizarMapa(char mapa[TAMANHO_MAPA][TAMANHO_MAPA]) {
	for (int linha = -1; linha <= TAMANHO_MAPA; linha++) {
		for (int coluna = -1; coluna <= TAMANHO_MAPA; coluna++) {
			if (coluna < 0 || coluna == TAMANHO_MAPA) {
				cout << CERCA;
			}
			else if (linha < 0 || linha == TAMANHO_MAPA) {
				cout << CERCA;
			}
			else {
				cout << mapa[linha][coluna];
			}
		}
		cout << endl;
	}
}
void preencherMatrizVazio(char mapa[TAMANHO_MAPA][TAMANHO_MAPA]) {
	for (int linha = 0; linha < TAMANHO_MAPA; linha++) {
		for (int coluna = 0; coluna < TAMANHO_MAPA; coluna++) {
			mapa[linha][coluna] = VAZIO;
		}
	}
}
void cercas(char mapa[TAMANHO_MAPA][TAMANHO_MAPA]) {
	srand(time(NULL));
	int linha, coluna, cercasColocadas = 0;
	while (cercasColocadas < 10) {
		gerarPosicao(linha, coluna, 1, 13);
		if (verificarCampoVazio(mapa, linha, coluna)) {
			mapa[linha][coluna] = CERCA;
			cercasColocadas++;
		}
	}
}
CentroPokemon criarCentroPokemon(char mapa[TAMANHO_MAPA][TAMANHO_MAPA]) {
	int linha, coluna;
	do {
		gerarPosicao(linha, coluna);
	} while (!verificarCampoVazio(mapa, linha, coluna));
	mapa[linha][coluna] = CENTROPOKEMON;

	CentroPokemon centroPokemon(linha, coluna);
	return centroPokemon;
}

