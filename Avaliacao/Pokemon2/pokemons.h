#pragma once
#ifndef POKEMONS_H
#define POKEMONS_H

#include "golpes.h"
#include "Tipos.h"
#include "golpesPokemons.h"

#include <time.h>
#include <string>
using namespace std;

const int GOLPES = 4;
const int TOTALPOKEMONS = 12;

struct Pokemon {
	int tipo, ataque, defesa, velocidade, vidaMaxima, vidaAtual, nivel;
	string nome;
	bool atribuido = false;
	GolpesPokemons golpes[GOLPES];

	Pokemon()
	{}

	Pokemon(string nome, int tipo, int ataque, int defesa, int velocidade, int vidaMaxima, GolpesPokemons golpes[], int nivel = 50) {
		this->nome = nome;
		this->tipo = tipo;
		this->ataque = ataque;
		this->defesa = defesa;
		this->velocidade = velocidade;
		this->vidaMaxima = vidaMaxima;
		this->vidaAtual = vidaMaxima;
		this->nivel = nivel;

		for (int indice = 0; indice < GOLPES; indice++)
			this->golpes[indice] = golpes[indice];

	}
};

#pragma region ******************ELETRICOS**********************

Pokemon criarPikachu()
{
	GolpesPokemons golpes[GOLPES];
	criarGolpesPikachu(golpes);

	Pokemon pikachu("Pikachu", ELETRICO, 26, 15, 90, 137, golpes);
	return pikachu;
}
Pokemon criarManectric() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesManectric(golpes);

	Pokemon manectric("Manectric", ELETRICO, 28, 18, 80, 140, golpes);
	return manectric;
}
#pragma endregion
#pragma region ******************VOADOR**********************
Pokemon criarLugia() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesLugia(golpes);

	Pokemon lugia("Lugia", VOADOR, 31, 17, 75, 134, golpes);
	return lugia;
}
Pokemon criarPidgey() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesPidgey(golpes);

	Pokemon pidgey("Pidgey", VOADOR, 33, 18, 72, 140, golpes);
	return pidgey;
}
Pokemon criarTogetic() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesTogetic(golpes);

	Pokemon togetic("Togetic", VOADOR, 35, 20, 70, 142, golpes);
	return togetic;
}
#pragma endregion
#pragma region ******************GRAMA**********************
Pokemon criarTangela() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesTangela(golpes);

	Pokemon tangela("Tangela", GRAMA, 20, 30, 40, 165, golpes);
	return tangela;
}
Pokemon criarCelebi() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesTangela(golpes);

	Pokemon tangela("Celebi", GRAMA, 22, 24, 45, 167, golpes);
	return tangela;
}
#pragma endregion
#pragma region ******************AGUA**********************
Pokemon criarKrabby() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesKrabby(golpes);

	Pokemon krabby("Krabby", AGUA, 24, 25, 60, 143, golpes);
	return krabby;
}
Pokemon criarMarill() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesMarill(golpes);

	Pokemon marill("Marill", AGUA, 25, 26, 61, 145, golpes);
	return marill;
}
Pokemon criarBlastoise() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesBlastoise(golpes);

	Pokemon blastoise("Blastoise", AGUA, 27, 23, 50, 150, golpes);
	return blastoise;
}
#pragma endregion
#pragma region ******************FOGO**********************
Pokemon criarLitleo() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesLitleo(golpes);

	Pokemon litleo("Litleo", FOGO, 37, 14, 63, 125, golpes);
	return litleo;
}
Pokemon criarLitten() {
	GolpesPokemons golpes[GOLPES];
	criarGolpesLitten(golpes);

	Pokemon litten("Litten", FOGO, 39, 12, 65, 130, golpes);
	return litten;
}
#pragma endregion
void gerarPokemons(Pokemon pokemons[12]) {
	pokemons[0] = criarPikachu();
	pokemons[1] = criarManectric();
	pokemons[2] = criarLugia();
	pokemons[3] = criarPidgey();
	pokemons[4] = criarTogetic();
	pokemons[5] = criarTangela();
	pokemons[6] = criarCelebi();
	pokemons[7] = criarKrabby();
	pokemons[8] = criarMarill();
	pokemons[9] = criarBlastoise();
	pokemons[10] = criarLitleo();
	pokemons[11] = criarLitten();
}
Pokemon escolherPokemons(Pokemon todosPokemons[]) {
	srand(time(NULL));
	bool loop = true;
	do {
		int indice = rand() % 12;
		if (todosPokemons[indice].atribuido == false) {
			todosPokemons[indice].atribuido = true;
			return todosPokemons[indice];
		}
	} while (loop);
}



#endif
