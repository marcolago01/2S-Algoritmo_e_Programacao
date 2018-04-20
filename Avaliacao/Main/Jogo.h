#pragma once
#ifndef jogo_h
#define jogo_h

//Constante para uso de todas as bibliotecas
const int TAM_TABULEIRO = 3;

#include <iostream>
#include "tabuleiro.h"
#include "interacao_usuario.h"
#include "validar_jogo.h"
#include "PLAYERvsCPU.h"
#include "player_vs_player.h"
using namespace std;

//Inicio do Jogo da velha
void jogo() {
	char
		TABULEIRO[TAM_TABULEIRO][TAM_TABULEIRO] = 
			{ 'L','L','L','L','L','L','L','L','L' },
		PLAYER1,
		PLAYER2,
		CPU;

	int
		MODO_DE_JOGO;
	
	bool
		SAIR = false;

	//Solicitando o tipo de jogo e se ele vai ser 'X' ou 'O';
	MODO_DE_JOGO = modo_de_jogo(SAIR);
	if (!SAIR) {
		escolha_personagem(PLAYER1, PLAYER2, CPU, SAIR);
	}

	//Inicio do Jogo com base na escolha do modo
	while (!SAIR) {
		if (MODO_DE_JOGO == 1) {
			PLAYERvsPLAYER(TABULEIRO, PLAYER1, PLAYER2, SAIR);
			SAIR = true;
		}
		else {
			PLAYERvsCPU(TABULEIRO, PLAYER1, CPU, SAIR);
			SAIR = true;
		}
	}
}
#endif
