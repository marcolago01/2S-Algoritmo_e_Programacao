#pragma once
#ifndef PLAYER_VS_CPU_H
#define PLAYER_VS_CPU_H

#include <time.h>
using namespace std;

/*
Responsavel pela inteligencia do CPU, 

Há 3 formatos de jogada que será realizado utilizando a primeira posição livre,

O que faz ter 3 formatos é só por onde ele começa a verificar
	Esquerda-Direita - Linhas depois alterar coluna
	Cima-Baixo - da Esquerda pra Direita
	Cima-baixo(inverso) - Coluna da Direita para esquerda
	
*/
void jogada_cpu(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO],char player, char CPU) {

	srand(time(NULL));
	int	jogada = 0;

	jogada = rand() % 4;
	switch (jogada)
	{
	case 1:
		for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
			for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
				if (tabuleiro[linha][coluna] != player && tabuleiro[linha][coluna] != CPU) {
					tabuleiro[linha][coluna] = CPU;
					return;
				}
			}
		}
	case 2:
		for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
			for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
				if (tabuleiro[linha][coluna] != player && tabuleiro[linha][coluna] != CPU) {
					tabuleiro[linha][coluna] = CPU;
					return;
				}
			}
		}
	case 3:
		for (int coluna = 2; coluna >= 0; coluna--) {
			for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
				if (tabuleiro[linha][coluna] != player && tabuleiro[linha][coluna] != CPU) {
					tabuleiro[linha][coluna] = CPU;
					return;
				}
			}
		}
	default:
		for (int linha = 2; linha >= 0; linha--) {
			for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
				if (tabuleiro[linha][coluna] != player && tabuleiro[linha][coluna] != CPU) {
					tabuleiro[linha][coluna] = CPU;
					return;
				}
			}
		}
	}
}

//Inicio da partida Player vs CPU
void PLAYERvsCPU(char TABULEIRO[TAM_TABULEIRO][TAM_TABULEIRO], char player, char CPU, bool &SAIR) {

	int
		LINHA,
		COLUNA,
		VEZ = 1;

	while (!SAIR) {

		do {
			renderizar_tabuleiro(TABULEIRO, player, CPU);
			jogada(player,VEZ, LINHA, COLUNA);
			system("cls");
		} while (!validar_jogada(TABULEIRO, LINHA, COLUNA, player, CPU));

		realizar_jogada(TABULEIRO, VEZ, LINHA, COLUNA, player, CPU);

		//Verificação de Vitória
		if (verificar_vitoria(TABULEIRO, player)) {
			renderizar_tabuleiro(TABULEIRO, player, CPU);
			cout << endl << endl
				<< "JOGADOR 1 VENCEU!" << endl;
			break;
		}
		else if (EMPATE(TABULEIRO, player, CPU)) {
			renderizar_tabuleiro(TABULEIRO, player, CPU);
			cout << endl << endl
				<< "Empate" << endl;
			break;
		}

		jogada_cpu(TABULEIRO, player, CPU);

		// Verificação de Vitória
			if (verificar_vitoria(TABULEIRO, CPU)) {
				renderizar_tabuleiro(TABULEIRO, player, CPU);
				cout << endl << endl
					<< "CPU VENCEU!" << endl;
				break;
			}
			else if (EMPATE(TABULEIRO, player, CPU)) {
				renderizar_tabuleiro(TABULEIRO, player, CPU);
				cout << endl << endl
					<< "Empate" << endl;
				break;
			}
	}
}
#endif // !CPU_H
