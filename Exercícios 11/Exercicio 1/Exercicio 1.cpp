/*
Exercícios

Crie uma estrutura para definir os clientes de sua
aplicação, cada cliente possui:

Nome
CPF
Idade

Faça um programa que crie um cliente e solicite as 3
informações ao usuário, depois disso o programa deve
exibir estas informações.
*/

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

struct Cliente {
	string nome;
	string cpf;
	int idade;
};

const int
	SOLICITAR_NOME = 1,
	SOLICITAR_CPF = 2,
	SOLICITAR_IDADE = 3;

void strings(int opcao) {
	switch (opcao)
	{
	case SOLICITAR_NOME:
		cout << "Insira o nome: \n";
		break;
	case SOLICITAR_CPF:
		cout << "Insira o CPF: \n";
		break;
	case SOLICITAR_IDADE:
		cout << "Insira a idade: ";
		break;
	}
}

int main()
{
	Cliente pessoa;
	strings(SOLICITAR_NOME);
	cin >> pessoa.nome;
	strings(SOLICITAR_CPF);
	cin >> pessoa.cpf;
	strings(SOLICITAR_IDADE);
	cin >> pessoa.idade;

	cout << "Nome: " << pessoa.nome << endl
		<< "CPF: " << pessoa.cpf << endl
		<< "Idade: " << pessoa.idade;
}

