#pragma once
#ifndef GOLPES_H
#define GOLPES_H

#include "tipos.h"

#include <string>
using namespace std;

//NOME,PODER,UsoLimite,TIPO
struct GolpesPokemons {
	int poder, usoLimite, usoRestante, tipo;
	string nome;

	GolpesPokemons()
	{}

	GolpesPokemons(string nome, int poder, int usoLimite, int tipo) {
		this->poder = poder;
		this->usoLimite = usoLimite;
		this->usoRestante = usoLimite;
		this->tipo = tipo;
		this->nome = nome;
	}
};

#pragma region ********************* ELETRICOS ***********************************
GolpesPokemons criarSpark() {
	GolpesPokemons golpeSpark("Spark", 7, 10, ELETRICO);
	return golpeSpark;
}
GolpesPokemons criarIronTail() {
	GolpesPokemons golpeIronTail("Iron Tail", 10, 7, ELETRICO);
	return golpeIronTail;
}
GolpesPokemons criarThunderbolt() {
	GolpesPokemons golpeThunderbolt("Thunderbolt", 18, 5, ELETRICO);
	return golpeThunderbolt;
}
GolpesPokemons criarShockWave() {
	GolpesPokemons golpeShockWave("Shock Wave", 25, 4, ELETRICO);
	return golpeShockWave;
}
GolpesPokemons criarMagnetRise() {
	GolpesPokemons golpeMagnetRise("Magnet Rise", 39, 2, ELETRICO);
	return golpeMagnetRise;
}
#pragma endregion
#pragma region *********************VOADOR************************
GolpesPokemons criarPeck() {
	GolpesPokemons golpePeck("Peck", 8, 9, VOADOR);
	return golpePeck;
}
GolpesPokemons criarTailwind() {
	GolpesPokemons golpeTailwind("Tailwind", 14, 7, VOADOR);
	return golpeTailwind;
}
GolpesPokemons criarGust() {
	GolpesPokemons golpeGust("Gust", 20, 5, VOADOR);
	return golpeGust;
}
GolpesPokemons criarMirrorMove() {
	GolpesPokemons golpeMirrorMove("Mirror Move", 28, 4, VOADOR);
	return golpeMirrorMove;
}
GolpesPokemons criarSkyDrop() {
	GolpesPokemons golpeSkyDrop("Sky Drop", 34, 3, VOADOR);
	return golpeSkyDrop;
}
#pragma endregion
#pragma region *********************GRAMA************************
GolpesPokemons criarSpore() {
	GolpesPokemons golpeSpore("Spore", 6, 10, GRAMA);
	return golpeSpore;
}
GolpesPokemons criarShyntesis() {
	GolpesPokemons golpeShyntesis("Shyntesis", 12, 9, GRAMA);
	return golpeShyntesis;
}
GolpesPokemons criarAbsorb() {
	GolpesPokemons golpeAbsorb("Absorb", 20, 5, GRAMA);
	return golpeAbsorb;
}
GolpesPokemons criarLeafBlade() {
	GolpesPokemons golpeLeafBlade("Leaf Blade", 29, 3, GRAMA);
	return golpeLeafBlade;
}
GolpesPokemons criarFrenzyPlant() {
	GolpesPokemons golpeFrenzyPlant("Frenzy Plant", 46, 1, GRAMA);
	return golpeFrenzyPlant;
}
#pragma endregion
#pragma region *********************AGUA************************
GolpesPokemons criarBubble() {
	GolpesPokemons golpeBubble("Bubble", 6, 9, AGUA);
	return golpeBubble;
}
GolpesPokemons criarDive() {
	GolpesPokemons golpeDive("Dive", 13, 7, AGUA);
	return golpeDive;
}
GolpesPokemons criarWaterGun() {
	GolpesPokemons golpeWaterGun("Water Gun", 21, 6, AGUA);
	return golpeWaterGun;
}
GolpesPokemons criarOctazooka() {
	GolpesPokemons golpeOctazooka("Octazooka", 31, 3, AGUA);
	return golpeOctazooka;
}
GolpesPokemons criarRazorShell() {
	GolpesPokemons golpeRazorShell("Razor Shell", 36, 2, AGUA);
	return golpeRazorShell;
}
#pragma endregion
#pragma region *********************FOGO************************
GolpesPokemons criarEmber() {
	GolpesPokemons golpeEmber("Ember", 9, 8, FOGO);
	return golpeEmber;
}
GolpesPokemons criarBlazeKick() {
	GolpesPokemons golpeBlazeKick("Blaze Kick", 16, 6, FOGO);
	return golpeBlazeKick;
}
GolpesPokemons criarFlamethrower() {
	GolpesPokemons golpeFlamethrower("Flamethrower", 25, 5, FOGO);
	return golpeFlamethrower;
}
GolpesPokemons criarIncinerate() {
	GolpesPokemons golpeIncinerate("Incinerate", 30, 3, FOGO);
	return golpeIncinerate;
}
GolpesPokemons criarInferno() {
	GolpesPokemons golpeInferno("Inferno", 50, 1, FOGO);
	return golpeInferno;
}
#pragma endregion
#endif
