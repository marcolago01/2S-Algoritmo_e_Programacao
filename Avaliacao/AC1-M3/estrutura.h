#pragma once

#include <string>
using namespace std;

#pragma region *****STRUCT*****
struct Usuarios {
	string nickname,
		senha, confirmacaoSenha,
		nomeCompleto,
		genero;
	int data, mes, ano;

	Usuarios()
	{}

	Usuarios(string nickname, string senha, string confirmacaoSenha, string nomeCompleto, string genero, int data, int mes, int ano) {
		this->nickname = nickname;
		this->senha = senha;
		this->confirmacaoSenha = confirmacaoSenha;
		this->nomeCompleto = nomeCompleto;
		this->genero = genero;
		this->data = data;
		this->mes = mes;
		this->ano = ano;
	}

};

struct RedeSocial {
	Usuarios *todosUsuarios = new Usuarios[0];
	int usuariosRegistrados = 0;
};

#pragma endregion
