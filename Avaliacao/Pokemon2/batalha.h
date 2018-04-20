#pragma once
#ifndef BATALHA_H
#define	BATALHA_H

#include "pokemons.h"
#include "jogadores.h"
#include "tipos.h"
#include "capturaTeclado.h"
#include <time.h>
using namespace std;

#pragma region ************VERIFICAÇÂO DE VANTAGENS E DESVANTAGENS ****************
bool vantagemSobreEletrico(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == FOGO && tipoPokemonDefensor == ELETRICO;
}
bool vantagemSobreVoador(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == ELETRICO && tipoPokemonDefensor == VOADOR;
}
bool vantagemSobreGrama(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == VOADOR && tipoPokemonDefensor == GRAMA;
}
bool vantagemSobreAgua(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == GRAMA && tipoPokemonDefensor == AGUA;
}
bool vantagemSobreFogo(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == AGUA && tipoPokemonDefensor == FOGO;
}

bool verificarVantagemAtacante(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	if (vantagemSobreEletrico(tipoGolpeAtacante,tipoPokemonDefensor)) {
		return true;
	}
	if (vantagemSobreVoador(tipoGolpeAtacante, tipoPokemonDefensor)) {
		return true;
	}
	if (vantagemSobreGrama(tipoGolpeAtacante, tipoPokemonDefensor)) {
		return true;
	}
	if (vantagemSobreAgua(tipoGolpeAtacante, tipoPokemonDefensor)) {
		return true;
	}
	if (vantagemSobreFogo(tipoGolpeAtacante, tipoPokemonDefensor)) {
		return true;
	}
	return false;
}

bool desvantagemSobreEletrico(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == VOADOR && tipoPokemonDefensor == ELETRICO;
}
bool desvantagemSobreVoador(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == GRAMA && tipoPokemonDefensor == VOADOR;
}
bool desvantagemSobreGrama(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == AGUA && tipoPokemonDefensor == GRAMA;
}
bool desvantagemSobreAgua(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == FOGO && tipoPokemonDefensor == AGUA;
}
bool desvantagemSobreFogo(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	return tipoGolpeAtacante == ELETRICO && tipoPokemonDefensor == FOGO;
}

bool verificarDesvantagemAtacante(int tipoGolpeAtacante, int tipoPokemonDefensor) {
	if (desvantagemSobreEletrico(tipoGolpeAtacante, tipoPokemonDefensor)) {
		return true;
	}
	if (desvantagemSobreVoador(tipoGolpeAtacante, tipoPokemonDefensor)) {
		return true;
	}
	if (desvantagemSobreGrama(tipoGolpeAtacante, tipoPokemonDefensor)) {
		return true;
	}
	if (desvantagemSobreAgua(tipoGolpeAtacante, tipoPokemonDefensor)) {
		return true;
	}
	if (desvantagemSobreFogo(tipoGolpeAtacante, tipoPokemonDefensor)) {
		return true;
	}
	return false;
}
#pragma endregion

int calcularDano(Pokemon pokemonAtacante, Pokemon pokemonDefensor, int golpeEscolhido) {
	srand(time(NULL));
	
	int dano = rand() % 16;
	dano = dano + ((pokemonAtacante.ataque + pokemonAtacante.golpes[golpeEscolhido].poder) - pokemonDefensor.defesa);
	if (verificarVantagemAtacante(pokemonAtacante.golpes[golpeEscolhido].tipo,pokemonAtacante.tipo)) {
		dano = dano*1.5;
	}
	else if (verificarDesvantagemAtacante(pokemonAtacante.golpes[golpeEscolhido].tipo, pokemonAtacante.tipo)) {
		dano = dano*0.5;
	}
	if (dano <= 0) {
		return 0;
	}
	return dano;
}
void trocarPokemon(Pokemon pokemons[POKEMONSJOGADORES]) {
	Pokemon troca = pokemons[0];
	pokemons[0] = pokemons[1];
	pokemons[1] = troca;
}
bool verificarPokemonDerrotado(int vidaPokemon) {
	return vidaPokemon <= 0;
}
bool verificarPokemonSemGolpes(GolpesPokemons golpes[TOTALGOLPES]) {
	int golpesSemAtaquesRestante = 0;
	for (int indice = 0; indice < TOTALGOLPES; indice++) {
		if (golpes[indice].usoRestante == 0) {
			golpesSemAtaquesRestante++;
		}
	}
	return golpesSemAtaquesRestante == 4;
}
int obterMelhorAtaque(Pokemon pokemonAtacante, Pokemon pokemonDefensor, int indice = 0, int melhorAtaque = 0) {
	if (indice == TOTALGOLPES) {
		return melhorAtaque;
	}
	if (calcularDano(pokemonAtacante, pokemonDefensor, indice) > calcularDano(pokemonAtacante, pokemonDefensor, melhorAtaque) && pokemonAtacante.golpes[indice].usoRestante > 0) {
		melhorAtaque = indice;
	}
	return obterMelhorAtaque(pokemonAtacante, pokemonDefensor, indice + 1, melhorAtaque);
}
int ataqueOponente(Pokemon pokemonAtacante,Pokemon pokemonDefensor) {
	srand(time(NULL));
	if (pokemonAtacante.nivel == 75) {
		return obterMelhorAtaque(pokemonAtacante, pokemonDefensor);
	}
	else
	{
		return rand() % 4;
	}
}
bool iniciarBatalha(Pokemon pokemonJogador[POKEMONSJOGADORES], Pokemon pokemonOponente[POKEMONSJOGADORES]) {
	int turno = 1;
	int escolha;
	bool jogadorComeca = true;

	if (pokemonJogador[0].velocidade < pokemonOponente[0].velocidade) {
		jogadorComeca = false;
	}
	do {
		system("cls");
		if (jogadorComeca) {
			do {
				if (verificarPokemonSemGolpes(pokemonJogador[0].golpes)) {
					trocarPokemon(pokemonJogador);
					if (verificarPokemonSemGolpes(pokemonJogador[0].golpes)) {
						return false;
					}
				}
				exibirBatalha(pokemonJogador, pokemonOponente, turno);
				do {
					escolha = capturarTecla<int>() - 1;
					if (escolha < 0 || escolha>TOTALGOLPES) {
						exibirMensagemTeclaErrada();
					}
				} while (escolha < 0 || escolha>3);

				if (pokemonJogador[0].golpes[escolha].usoRestante <= 0) {
					system("cls");
					exibirGolpeIndisponivel();
				}
			} while (pokemonJogador[0].golpes[escolha].usoRestante <= 0);

			pokemonOponente[0].vidaAtual = pokemonOponente[0].vidaAtual - calcularDano(pokemonJogador[0], pokemonOponente[0], escolha);
			pokemonJogador[0].golpes[escolha].usoRestante--;

			if (verificarPokemonDerrotado(pokemonOponente[0].vidaAtual)) {
				trocarPokemon(pokemonOponente);
				if (verificarPokemonDerrotado(pokemonOponente[0].vidaAtual)) {
					break;
				}
			}
		}
		escolha=ataqueOponente(pokemonOponente[0], pokemonJogador[0]);
		pokemonJogador[0].vidaAtual = pokemonJogador[0].vidaAtual - calcularDano(pokemonOponente[0], pokemonJogador[0], escolha);

		if (verificarPokemonDerrotado(pokemonJogador[0].vidaAtual)) {
			trocarPokemon(pokemonJogador);
			if (verificarPokemonDerrotado(pokemonJogador[0].vidaAtual)) {
				break;
			}
		}

		turno++;

		if (!jogadorComeca) {
			jogadorComeca = true;
		}
	} while (pokemonsRestantes(pokemonJogador) > 0 && pokemonsRestantes(pokemonOponente) > 0);

	system("cls");
	if (pokemonsRestantes(pokemonJogador) > 0) {
		return true;
	}
	else {
		return false;
	}
}

#endif
