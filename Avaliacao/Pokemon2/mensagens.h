#pragma once

#ifndef MENSAGEM_H
#define	MENSAGEM_H

#include <iostream>
#include <string>
#include "pokemons.h"
#include "jogadores.h"
using namespace std;

void exibirPokemonsRecuperados() {
	cout << endl <<
		"Pokemons Recuperados!" << endl;
	system("pause");
}
void exibirMenuMovimentacao() {
	setlocale(LC_ALL, "PORTUGUESE");
	cout << endl <<
		"Movimentação: " << "W - Cima  " << "A - Esquerda  " << "S - Baixo  " << "D - Direita" << endl <<
		"J - Esperar/Confirmar" << endl <<
		"Sua Opção: ";
}
void exibirMensagemTeclaErrada() {
	setlocale(LC_ALL, "PORTUGUESE");
	cout << endl <<
		"Tecla Incorreta!" << endl;
}
void exibirMonstrosRestantes(int monstroJogadorRestantes, int monstroOponenteRestantes) {
	cout << endl <<
		"Jogador: " << monstroJogadorRestantes << " restantes" << endl <<
		"Oponente: " << monstroOponenteRestantes << " restantes" << endl;
}
void exibirTurno(int turno) {
	cout << endl <<
		"Turno " << turno << ": " << endl;
}
string exibirTipos(int elemento) {
	if (elemento == ELETRICO) {
		return "Eletrico";
	}
	else if (elemento == VOADOR) {
		return "Voador";
	}
	else if (elemento == GRAMA) {
		return "Grama";
	}
	else if (elemento == AGUA) {
		return "Água";
	}
	else if (elemento == FOGO) {
		return "Fogo";
	}
}
void exibirStatusMonstroBatalhando(Pokemon pokemonJogador, Pokemon pokemonOponente) {
	cout << pokemonJogador.nome << "(LV " << pokemonJogador.nivel << ") " << pokemonJogador.vidaAtual << "/" << pokemonJogador.vidaMaxima << "\tTipo: "<< exibirTipos(pokemonJogador.tipo)<< endl <<
		"VS" << endl <<
		pokemonOponente.nome << "(LV " << pokemonOponente.nivel << ") " << pokemonOponente.vidaAtual << "/" << pokemonOponente.vidaMaxima << "\tTipo: " << exibirTipos(pokemonOponente.tipo) << endl;
}
void exibirSolicitacaoAtaque(Pokemon pokemonJogador) {
	cout << endl <<
		"Qual ataque seu " << pokemonJogador.nome << " deve utilizar?" << endl;
	cout << "(1) " << pokemonJogador.golpes[0].nome << "\t\tPoder: " << pokemonJogador.golpes[0].poder << "\tUso Restante:" << pokemonJogador.golpes[0].usoRestante << "\tTipo: " << exibirTipos(pokemonJogador.golpes[0].tipo) << endl;
	cout << "(2) " << pokemonJogador.golpes[1].nome << "\t\tPoder: " << pokemonJogador.golpes[1].poder << "\tUso Restante:" << pokemonJogador.golpes[1].usoRestante << "\tTipo: " << exibirTipos(pokemonJogador.golpes[1].tipo) << endl;
	cout << "(3) " << pokemonJogador.golpes[2].nome << "\t\tPoder: " << pokemonJogador.golpes[2].poder << "\tUso Restante:" << pokemonJogador.golpes[2].usoRestante << "\tTipo: " << exibirTipos(pokemonJogador.golpes[2].tipo) << endl;
	cout << "(4) " << pokemonJogador.golpes[3].nome << "\t\tPoder: " << pokemonJogador.golpes[3].poder << "\tUso Restante:" << pokemonJogador.golpes[3].usoRestante << "\tTipo: " << exibirTipos(pokemonJogador.golpes[3].tipo) << endl;
	cout << endl <<
		"Sua escolha: ";
}
void gameOver() {
	system("cls");
	cout << "GAME OVER!" << endl;
}
void exibirBatalha(Pokemon jogador[POKEMONSJOGADORES],Pokemon oponente[POKEMONSJOGADORES],int turno) {
	exibirMonstrosRestantes(pokemonsRestantes(jogador), pokemonsRestantes(oponente));
	exibirTurno(turno);
	exibirStatusMonstroBatalhando(jogador[0], oponente[0]);
	exibirSolicitacaoAtaque(jogador[0]);
}
void exibirGolpeIndisponivel() {
	cout << endl <<
		"Golpe indisponivel!" << endl;
}
void exibirVitoria() {
	system("cls");
	cout << "Você venceu!" << endl;
}


#endif 
