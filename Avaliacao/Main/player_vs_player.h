#pragma once
#ifndef PLAYER_VS_PLAYER_H
#define PLAYER_VS_PLAYER_H

/*
Inicio da Partida Player vs Player
*/
void PLAYERvsPLAYER(char TABULEIRO[TAM_TABULEIRO][TAM_TABULEIRO], char PLAYER1, char PLAYER2, bool &SAIR) {

	int
		LINHA,
		COLUNA,
		VEZ;	//variavel para troca de vez de cada jogador.

	while (!SAIR) {
		VEZ = 1;
		do {
			renderizar_tabuleiro(TABULEIRO,PLAYER1,PLAYER2);
			jogada(PLAYER1, VEZ, LINHA, COLUNA);
			system("cls");
		} while (!validar_jogada(TABULEIRO, LINHA, COLUNA, PLAYER1, PLAYER2));

		realizar_jogada(TABULEIRO, VEZ, LINHA, COLUNA, PLAYER1, PLAYER2);

		//Verificação de Vitória
		if (verificar_vitoria(TABULEIRO, PLAYER1)) {
			renderizar_tabuleiro(TABULEIRO, PLAYER1, PLAYER2);
			cout << endl << endl
				<< "JOGADOR 1 VENCEU!" << endl;
			break;
		}
		else if (EMPATE(TABULEIRO, PLAYER1, PLAYER2)) {
			renderizar_tabuleiro(TABULEIRO, PLAYER1, PLAYER2);
			cout << endl << endl
				<< "Empate" << endl;
			break;
		}

		VEZ = 2;
		do {
			renderizar_tabuleiro(TABULEIRO, PLAYER1, PLAYER2);
			jogada(PLAYER2, VEZ, LINHA, COLUNA);
			system("cls");
		} while (!validar_jogada(TABULEIRO, LINHA, COLUNA, PLAYER1, PLAYER2));

		realizar_jogada(TABULEIRO, VEZ, LINHA, COLUNA, PLAYER1, PLAYER2);

		//Verificação de Vitória
		if (verificar_vitoria(TABULEIRO, PLAYER2)) {
			renderizar_tabuleiro(TABULEIRO, PLAYER1, PLAYER2);
			cout << endl << endl
				<< "JOGADOR 2 VENCEU!" << endl;
			break;
		}
		else if (EMPATE(TABULEIRO, PLAYER1, PLAYER2)) {
			renderizar_tabuleiro(TABULEIRO, PLAYER1, PLAYER2);
			cout << endl << endl
				<< "Empate" << endl;
			break;
		}
	}
}
#endif // !PLAYER_VS_PLAYER_H
