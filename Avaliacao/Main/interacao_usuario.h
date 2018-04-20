#pragma once
#ifndef interacao_usuario_h
#define interacao_usuario_h

#include <iostream>
using namespace std;

/*
Escolhendo o modo de jogo
	1-VS player
	2-VS CPU
	0-SAIR
*/
int modo_de_jogo(bool &sair) {
	int escolha;
	do {

		cout << "Bem vindo ao Jogo da Velha!" << endl
			<< "Para o jogo ocorra de maneira fluida, usa APENAS números em todas as interações" << endl << endl
			<< "Escolha uma opção:" << endl
			<< " 1- Player vs Player" << endl
			<< " 2- Player vs CPU" << endl
			<< " 0- Sair" << endl
			<< "Opção: ";
		cin >> escolha;
		cout << endl;

		if (escolha != 1 && escolha != 2 && escolha != 0) {
			system("cls");
			cout << "Opção inválida!" << endl << endl;
		}

	} while (escolha != 1 && escolha != 2 && escolha != 0);
	if (escolha == 0) {
		sair = true;
	}
	return escolha;
}
	
/*
Escolhendo o simbolo do jogador 1
	1 - X
	2 - O
*/
void escolha_personagem(char &player1, char &player2, char &CPU,bool &sair) {
	int jogador1;

	do {
		system("cls");
		cout << "Escolha quem você vai ser no jogo:" << endl
			<< " 1 = 'X'" << endl
			<< " 2 = 'O'" << endl
			<< "Opção: ";
		cin >> jogador1;
		cout << endl;
	} while (jogador1 != 1 && jogador1 != 2);

	if (jogador1 == 1) {
		player1 = 'X';
		player2 = 'O';
		CPU = 'O';
	}
	else if (jogador1 == 2) {
		player1 = 'O';
		player2 = 'X';
		CPU = 'X';
	}
	system("cls");
}

/*
Realiza a captura da jogada do jogador da vez
*/
void jogada(char player,int vez, int &linha, int &coluna) {
	cout << endl
		<< "É a vez do Jogador " << vez << endl
		<< "Insira a linha: ";
		cin >> linha;

		cout << "Insira a Coluna:";
		cin >> coluna;

		linha = linha - 1;
		coluna = coluna - 1;

}

/*
Registra a jogada na Matriz apos passar nas validações.
*/
void realizar_jogada(char tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int vez, int linha, int coluna, char play1, char play2) {
	if (vez == 1) {
		tabuleiro[linha][coluna] = play1;
	}
	else if (vez == 2) {
		tabuleiro[linha][coluna] = play2;
	}
}

#endif 

