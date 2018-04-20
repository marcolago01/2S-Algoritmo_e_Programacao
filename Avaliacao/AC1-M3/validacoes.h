#pragma once
#ifndef VALIDACOES_H
#define VALIDACOES_H



#include <string>
#include "constantes.h"
#include "redesocial.h"
using namespace std;

bool verificarCadastroSenha(string senha, string confirmacaoSenha) {
	return senha == confirmacaoSenha;
}
bool verificarCadastroData(int data) {
	return data >= 1 && data <= 31;
}
bool verificarCadastroMes(int mes) {
	return mes >= 1 && mes <= 12;
}
bool verificarCadastroAno(int ano) {
	return ano <= 2017;
}
bool verificarMaior18Anos(int ano) {
	if (ano < 1900) {
		return false;
	}
	return 2017 - ano >= 18;
}
bool verificarNicknamesIguais(Usuarios *usuarios, string nickname, int totalUsuarios) {

	for (int aux = 0; aux < totalUsuarios; aux++)
	{
		if (usuarios[aux].nickname == nickname) {
			return false;
		}
	}
	return true;
}
bool verificarSenhaAcesso(string nickname);

#endif // !VALIDACOES_H
