#pragma once
#ifndef CAPTURATECLADO_H
#define CAPTURATECLADO_H

#include "mapa.h"
#include "jogadores.h"

bool teclasValidas(char tecla) {
	return tecla == 'w' || tecla == 'W' ||
		tecla == 'a' || tecla == 'A' ||
		tecla == 's' || tecla == 'S' ||
		tecla == 'd' || tecla == 'D' ||
		tecla == 'j' || tecla == 'J';
}
void teclaW(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Jogadores &jogador) {
	mapa[jogador.linha][jogador.coluna] = VAZIO;
	jogador.linha = jogador.linha - 1;
	mapa[jogador.linha][jogador.coluna] = jogador.simbolo;
}
void teclaA(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Jogadores &jogador) {
	mapa[jogador.linha][jogador.coluna] = VAZIO;
	jogador.coluna = jogador.coluna - 1;
	mapa[jogador.linha][jogador.coluna] = jogador.simbolo;
}
void teclaS(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Jogadores &jogador) {
	mapa[jogador.linha][jogador.coluna] = VAZIO;
	jogador.linha = jogador.linha + 1;
	mapa[jogador.linha][jogador.coluna] = jogador.simbolo;
}
void teclaD(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Jogadores &jogador) {
	mapa[jogador.linha][jogador.coluna] = VAZIO;
	jogador.coluna = jogador.coluna + 1;
	mapa[jogador.linha][jogador.coluna] = jogador.simbolo;
}
bool teclaJ() {
	return true;
}
void acaoTeclas(char tecla, char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Jogadores &jogador, bool &esperarConfirmar) {
	switch (tecla)
	{
	case 'w':
	case 'W':
		if (verificarCampoVazio(mapa, jogador.linha - 1, jogador.coluna) && jogador.linha > 0) {
			teclaW(mapa, jogador);
		}
		break;
	case 'a':
	case 'A':
		if (verificarCampoVazio(mapa, jogador.linha, jogador.coluna - 1) && jogador.coluna > 0) {
			teclaA(mapa, jogador);
		}
		break;
	case 's':
	case 'S':
		if (verificarCampoVazio(mapa, jogador.linha + 1, jogador.coluna) && jogador.linha<TAMANHO_MAPA - 1) {
			teclaS(mapa, jogador);
		}
		break;
	case 'd':
	case 'D':
		if (verificarCampoVazio(mapa, jogador.linha, jogador.coluna + 1) && jogador.coluna<TAMANHO_MAPA - 1) {
			teclaD(mapa, jogador);
		}
		break;
	case 'j':
	case 'J':
		esperarConfirmar = teclaJ();
		if (esperarConfirmar) {
			if (jogadorAdjacentCentroPokemon(mapa, jogador)) {
				exibirPokemonsRecuperados();
			}
		}
		break;
	default:
		break;
	}
}
template <typename T>
T capturarTecla() {
	T opcao;
	cin >> opcao;
	return opcao;
}
#endif
