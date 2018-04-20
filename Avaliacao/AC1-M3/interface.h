	#pragma once
#ifndef INTERFACES_H
#define INTERFACES_H

#include <iostream>
#include <string>
using namespace std;

int exibirPaginaInicial() {
	int opcao;
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	cout
		<< "Bem vindo ao COBAIAS" << endl
		<< "Escolha uma op��o abaixo: " << endl << endl
		<< "1 - Entrar" << endl
		<< "2 - Criar usu�rio" << endl
		<< "3 - Fechar programa" << endl << endl
		<< "Sua op��o: ";
	cin >> opcao;
	return opcao;
}

#pragma region ********Interface Login****
void exibirLogin() {
	system("cls");
	cout << "Realize seu login" << endl << endl;
}
void exibirInsiraUsuario() {
	cout << "Insira seu usuario: ";
}
void exibirInsiraSenha() {
	cout << "Insira sua senha: ";
}

#pragma endregion

#pragma region ********Interface Cadastro****
void exibirCadastro() {
	system("cls");
	cout << "Para criarmos seu usuario preencha o seguinte cadastro" << endl << endl;
}
string exibirSolicitacaoNickname() {
	string user;

	cout << endl;
	cout << "Usuario: ";
	cin >> user;
	return user;
}

void exibirNicknameInvalido() {
	system("cls");

	cout << "Nome do usu�rio inv�lido!" << endl
		<< "Por favor tente novamente." << endl;
}

string exibirSolicitacaoSenha() {
	string senha;

	cout << endl;
	cout << "Senha: ";
	cin >> senha;
	return senha;
}

void exibirSenhasDiferentes() {
	system("cls");

	cout << "Senha est�o diferentes!" << endl
		<< "Cadastre a senha novamente." << endl;
}
string exibirSolicitacaoConfirmarSenha() {
	string senha;

	cout << endl;
	cout << "Confirme sua senha: ";
	cin >> senha;
	return senha;
}

string exibirSolicitacaoNomeCompleto() {
	string nome;

	cout << endl;
	cout << "Insira seu nome completo: ";
	cin >> nome;
	return nome;
}
int exibirSolicitacaoGenero() {
	int genero;
	cout << endl;
	cout << "Selecione o g�nero: " << endl
		<< "1 - Masculino" << "\t2 - Feminino" << "\t3 - N�o informar" << endl
		<< "Sua op��o: ";
	cin >> genero;
	return genero;
}

void exibirGeneroInv�lido() {
	system("cls");

	cout << "Op��o inv�lida!" << endl
		<< "Tente novamente." << endl;
}

int exibirSolicitacaoData() {
	int data;

	cout << endl;
	cout << "Insira sua data de nascimento: ";
	cin >> data;
	return data;
}

void exibirDataInvalida() {
	system("cls");

	cout << "Data Inv�lida" << endl
		<< "Tente novamente." << endl;
}

int exibirSolicitacaoMes() {
	int mes;

	cout << endl;
	cout << "Insira seu m�s de nascimento: ";
	cin >> mes;
	return mes;
}

void exibirMesInvalido() {
	system("cls");

	cout << "M�s Inv�lido" << endl
		<< "Tente novamente." << endl;
}

int exibirSolicitacaoAno() {
	int ano;

	cout << endl;
	cout << "Insira seu ano de nascimento(1900 - 2017): ";
	cin >> ano;
	return ano;
}

void exibirAnoInvalido() {
	system("cls");

	cout << "Ano Inv�lido" << endl
		<< "Tente novamente." << endl;
}
#pragma endregion

#endif
