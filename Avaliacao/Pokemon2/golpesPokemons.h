#pragma once

#ifndef GOLPESPOKEMONS_H
#define GOLPESPOKEMONS_H

#include "golpes.h"

#include <string>
using namespace std;

#pragma region ******************ELETRICOS**********************
void criarGolpesManectric(GolpesPokemons golpes[]) {
	golpes[0] = criarBubble();
	golpes[1] = criarTailwind();
	golpes[2] = criarThunderbolt();
	golpes[3] = criarMagnetRise();
}
void criarGolpesPikachu(GolpesPokemons golpes[])
{
	golpes[0] = criarSpore();
	golpes[1] = criarBlazeKick();
	golpes[2] = criarShockWave();
	golpes[3] = criarMagnetRise();
}
#pragma endregion
#pragma region *****************VOADOR**********************
void criarGolpesLugia(GolpesPokemons golpes[]) {
	golpes[0] = criarEmber();
	golpes[1] = criarIronTail();
	golpes[2] = criarGust();
	golpes[3] = criarSkyDrop();
}
void criarGolpesPidgey(GolpesPokemons golpes[]) {
	golpes[0] = criarBubble();
	golpes[1] = criarShyntesis();
	golpes[2] = criarMirrorMove();
	golpes[3] = criarSkyDrop();
}
void criarGolpesTogetic(GolpesPokemons golpes[]) {
	golpes[0] = criarEmber();
	golpes[1] = criarDive();
	golpes[2] = criarGust();
	golpes[3] = criarMirrorMove();
}
#pragma endregion
#pragma region ******************GRAMA**********************
void criarGolpesTangela(GolpesPokemons golpes[]) {
	golpes[0] = criarSpark();
	golpes[1] = criarTailwind();
	golpes[2] = criarAbsorb();
	golpes[3] = criarFrenzyPlant();
}
void criarGolpesCelebi(GolpesPokemons golpes[]) {
	golpes[0] = criarPeck();
	golpes[1] = criarBlazeKick();
	golpes[2] = criarLeafBlade();
	golpes[2] = criarFrenzyPlant();
}
#pragma endregion
#pragma region ******************AGUA**********************
void criarGolpesKrabby(GolpesPokemons golpes[]) {
	golpes[0] = criarPeck();
	golpes[1] = criarIronTail();
	golpes[2] = criarWaterGun();
	golpes[3] = criarRazorShell();
}
void criarGolpesMarill(GolpesPokemons golpes[]) {
	golpes[0] = criarSpore();
	golpes[1] = criarTailwind();
	golpes[2] = criarOctazooka();
	golpes[3] = criarRazorShell();
}
void criarGolpesBlastoise(GolpesPokemons golpes[]) {
	golpes[0] = criarEmber();
	golpes[1] = criarShyntesis();
	golpes[2] = criarWaterGun();
	golpes[3] = criarOctazooka();
}
#pragma endregion
#pragma region ******************FOGO**********************
void criarGolpesLitleo(GolpesPokemons golpes[]) {
	golpes[0] = criarSpore();
	golpes[1] = criarTailwind();
	golpes[2] = criarFlamethrower();
	golpes[3] = criarInferno();
}
void criarGolpesLitten(GolpesPokemons golpes[]) {
	golpes[0] = criarSpark();
	golpes[1] = criarShyntesis();
	golpes[2] = criarIncinerate();
	golpes[3] = criarInferno();
}
#pragma endregion

#endif