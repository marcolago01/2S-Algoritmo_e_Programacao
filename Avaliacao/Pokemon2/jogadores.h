#pragma once
#ifndef JOGADORES_H
#define JOGADORES_H

#include "mensagens.h"
#include "mapa.h"
#include "pokemons.h"

const int OPONENTES = 4;
const int POKEMONSJOGADORES = 2;
const char OPONENTE = 'O';
const char LIDERGINASIO = 'L';
const char JOGADOR = 'J';
const int TOTALGOLPES = 4;

struct Jogadores {
	int linha, coluna;
	char simbolo;
	Pokemon pokemons[POKEMONSJOGADORES];

	Jogadores() 
	{}

	Jogadores(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Pokemon pokemon1, Pokemon pokemon2)
	{}

	Jogadores(int linha, int coluna, char simbolo, Pokemon pokemons[]) {
		this->linha = linha;
		this->coluna = coluna;
		this->simbolo = simbolo;

		for (int indice = 0; indice < POKEMONSJOGADORES; indice++) {
			this->pokemons[indice] = pokemons[indice];
		}
	}
};
Jogadores criarOponente(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Pokemon pokemon1, Pokemon pokemon2) {
	int linha, coluna;
	do {
		gerarPosicao(linha, coluna);
	} while (!verificarCampoVazio(mapa, linha, coluna));
	mapa[linha][coluna] = OPONENTE;

	Pokemon pokemonOponentes[POKEMONSJOGADORES];
	pokemonOponentes[0] = pokemon1;
	pokemonOponentes[1] = pokemon2;

	Jogadores oponentes(linha, coluna, OPONENTE, pokemonOponentes);
	return oponentes;
}
Jogadores criarLiderGinasio(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Pokemon pokemon1, Pokemon pokemon2) {
	int linha, coluna;
	do {
		gerarPosicao(linha, coluna);
	} while (!verificarCampoVazio(mapa, linha, coluna));
	mapa[linha][coluna] = LIDERGINASIO;

	Pokemon pokemonLider[POKEMONSJOGADORES];
	pokemonLider[0] = pokemon1;
	pokemonLider[1] = pokemon2;

	for (int indicePokemons = 0; indicePokemons < POKEMONSJOGADORES; indicePokemons++) {
		pokemonLider[indicePokemons].nivel = 75;
		for (int indiceGolpes = 0; indiceGolpes < TOTALGOLPES; indiceGolpes++) {
			pokemonLider[indicePokemons].golpes[indiceGolpes].poder = pokemonLider[indicePokemons].golpes[indiceGolpes].poder*1.25;
		}
	}

	Jogadores liderGinasio(linha, coluna, LIDERGINASIO, pokemonLider);

	return liderGinasio;
}
Jogadores criarJogador(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Pokemon pokemon1, Pokemon pokemon2) {

	Pokemon pokemonsJogador[POKEMONSJOGADORES];
	pokemonsJogador[0] = pokemon1;
	pokemonsJogador[1] = pokemon2;

	Jogadores jogador(7, 7, JOGADOR, pokemonsJogador);
	mapa[7][7] = JOGADOR;
	return jogador;
}
void recuperarPokemons(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Pokemon pokemonJogador[POKEMONSJOGADORES]) {
	for (int indicePokemon = 0; indicePokemon < POKEMONSJOGADORES; indicePokemon++) {
		pokemonJogador[indicePokemon].vidaAtual = pokemonJogador[indicePokemon].vidaMaxima;
		for (int indiceGolpe = 0; indiceGolpe < TOTALGOLPES; indiceGolpe++) {
			pokemonJogador[indicePokemon].golpes[indiceGolpe].usoRestante = pokemonJogador[indicePokemon].golpes[indiceGolpe].usoLimite;
		}
	}
}
bool jogadorAdjacentCentroPokemon(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Jogadores &jogador) {
	if (mapa[jogador.linha + 1][jogador.coluna] == CENTROPOKEMON) {
		recuperarPokemons(mapa, jogador.pokemons);
		return true;
	}
	else if (mapa[jogador.linha][jogador.coluna + 1] == CENTROPOKEMON) {
		recuperarPokemons(mapa, jogador.pokemons);
		return true;
	}
	else if (mapa[jogador.linha - 1][jogador.coluna] == CENTROPOKEMON) {
		recuperarPokemons(mapa, jogador.pokemons);
		return true;
	}
	else if (mapa[jogador.linha][jogador.coluna - 1] == CENTROPOKEMON) {
		recuperarPokemons(mapa, jogador.pokemons);
		return true;
	}
	return false;
}
bool OponenteAdjacentJogador(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Jogadores &jogador) {
	if (mapa[jogador.linha + 1][jogador.coluna] == JOGADOR) {
		return true;
	}
	else if (mapa[jogador.linha][jogador.coluna + 1] == JOGADOR) {
		return true;
	}
	else if (mapa[jogador.linha - 1][jogador.coluna] == JOGADOR) {
		return true;
	}
	else if (mapa[jogador.linha][jogador.coluna - 1] == JOGADOR) {
		return true;
	}
	else {
		return false;
	}
}
int pokemonsRestantes(Pokemon pokemons[POKEMONSJOGADORES]) {
	int pokemonsRestantes = 0;
	if (pokemons[0].vidaAtual > 0) {
		pokemonsRestantes++;
	}
	if (pokemons[1].vidaAtual > 0) {
		pokemonsRestantes++;
	}
	return pokemonsRestantes;
}
int verificarMelhorMovimentoOponentes(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], int oponenteLinha, int oponenteColuna, Jogadores jogador, int passos = 0) {
	if (OponenteAdjacentJogador(mapa, jogador)) {
		return passos;
	}
	if (oponenteLinha > jogador.linha) {
		return verificarMelhorMovimentoOponentes(mapa, oponenteLinha - 1, oponenteColuna, jogador, passos++);
	}
	if (oponenteColuna > jogador.coluna) {
		return verificarMelhorMovimentoOponentes(mapa, oponenteLinha, oponenteColuna - 1, jogador, passos++);
	}
	if (oponenteLinha < jogador.linha) {
		return verificarMelhorMovimentoOponentes(mapa, oponenteLinha + 1, oponenteColuna, jogador, passos++);
	}
	if (oponenteColuna < jogador.coluna) {
		return verificarMelhorMovimentoOponentes(mapa, oponenteLinha, oponenteColuna+1, jogador, passos++);
	}
}
void movimentoOponente(char mapa[TAMANHO_MAPA][TAMANHO_MAPA], Jogadores &oponente, Jogadores jogador) {
	if (oponente.linha>jogador.linha && verificarCampoVazio(mapa, oponente.linha - 1, oponente.coluna)) {
		mapa[oponente.linha][oponente.coluna] = VAZIO;
		oponente.linha = oponente.linha - 1;
		mapa[oponente.linha][oponente.coluna] = oponente.simbolo;
	}
	else if (oponente.coluna<jogador.coluna && verificarCampoVazio(mapa, oponente.linha, oponente.coluna + 1)) {
		mapa[oponente.linha][oponente.coluna] = VAZIO;
		oponente.coluna = oponente.coluna + 1;
		mapa[oponente.linha][oponente.coluna] = oponente.simbolo;
	}
	else if (oponente.linha<jogador.linha && verificarCampoVazio(mapa, oponente.linha + 1, oponente.coluna)) {
		mapa[oponente.linha][oponente.coluna] = VAZIO;
		oponente.linha = oponente.linha + 1;
		mapa[oponente.linha][oponente.coluna] = oponente.simbolo;
	}
	else if (oponente.coluna>jogador.coluna && verificarCampoVazio(mapa, oponente.linha, oponente.coluna - 1)) {
		mapa[oponente.linha][oponente.coluna] = VAZIO;
		oponente.coluna = oponente.coluna - 1;
		mapa[oponente.linha][oponente.coluna] = oponente.simbolo;
	}
}
#endif

