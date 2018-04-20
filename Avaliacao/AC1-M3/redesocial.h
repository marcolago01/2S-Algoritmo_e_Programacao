#pragma once
#ifndef USUARIOS_H
#define USUARIO_H

#include <string>
#include "estrutura.h"
#include "validacoes.h"
#include "interface.h"
#include "constantes.h"
using namespace std;

Usuarios usuarioTeste() {
	Usuarios usuario("teste", "senhaTeste", "senhaTeste", "nome", "unisex", 22, 2, 2017);
	return usuario;
}

#pragma region *****Cadastros*****
string cadastroNickname(Usuarios *usuarios, int totalUsuarios) {
	string nickname;

	do {
		nickname = exibirSolicitacaoNickname();
		if (verificarNicknamesIguais(usuarios, nickname, totalUsuarios)) {
			exibirNicknameInvalido();
		}
	} while (verificarNicknamesIguais(usuarios, nickname, totalUsuarios));
	return nickname;
}

string cadastroSenha() {
	string senha, confirmacaoSenha;
	do {
		senha = exibirSolicitacaoSenha();
		confirmacaoSenha = exibirSolicitacaoConfirmarSenha();
		if (senha != confirmacaoSenha) {
			exibirSenhasDiferentes();
		}
	} while (senha != confirmacaoSenha);
	return senha;
}
int cadastroGenero() {
	int genero = exibirSolicitacaoGenero();
	do {
		switch (genero)
		{
		case GENERO::MASCULINO:
			genero=GENERO::MASCULINO;
			break;
		case GENERO::FEMININO:
			genero = GENERO::FEMININO;
			break;
		case GENERO::NAOINFORMAR:
			genero = GENERO::NAOINFORMAR;
			break;
		default:
			exibirGeneroInválido();
		}
	} while (genero != GENERO::MASCULINO || genero != GENERO::FEMININO || genero != GENERO::NAOINFORMAR);
	return genero;
}

int cadastroData() {
	int data;
	do {
		data = exibirSolicitacaoData();
		if (verificarCadastroData(data)) {
			exibirDataInvalida();
		}
	} while (!verificarCadastroData(data));
	return data;
}

int cadastroMes() {
	int mes;
	do {
		mes = exibirSolicitacaoData();
		if (verificarCadastroMes(mes)) {
			exibirMesInvalido();
		}
	} while (!verificarCadastroMes(mes));
	return mes;
}

int cadastroAno() {
	int ano;
	do {
		ano = exibirSolicitacaoAno();
		if (verificarCadastroAno(ano)) {
			exibirAnoInvalido();
		}
	} while (!verificarCadastroAno(ano));
	return ano;
}

Usuarios cadastroUsuario(Usuarios *usuarios, int totalUsuarios) {
	Usuarios usuarioNovo;

	usuarioNovo.nickname = cadastroNickname(usuarios, totalUsuarios);
	usuarioNovo.senha = cadastroSenha();
	usuarioNovo.nomeCompleto = exibirSolicitacaoNomeCompleto();
	usuarioNovo.genero = cadastroGenero();
	usuarioNovo.data = cadastroData();
	usuarioNovo.mes = cadastroMes();
	usuarioNovo.ano = cadastroAno();

	return usuarioNovo;
}
#pragma endregion
void novoUsuario(RedeSocial &redeSocial) {
	Usuarios novoUsuario= cadastroUsuario(redeSocial.todosUsuarios, redeSocial.usuariosRegistrados);
	Usuarios *tempTodosUsuarios = new Usuarios[redeSocial.usuariosRegistrados+1];

	for (int aux = 0; aux < redeSocial.usuariosRegistrados; aux++)
	{
		tempTodosUsuarios[aux] = redeSocial.todosUsuarios[aux];
	}

	tempTodosUsuarios[redeSocial.usuariosRegistrados] = novoUsuario;
	redeSocial.todosUsuarios = tempTodosUsuarios;
}

#endif