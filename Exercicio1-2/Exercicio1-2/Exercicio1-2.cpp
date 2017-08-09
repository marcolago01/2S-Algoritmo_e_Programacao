// Exercicio1-2.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{
	string nome;
	int idade;
	setlocale(LC_ALL, "Brasil");		//fazer o console exibir acentos

	cout << "Insira seu nome: ";
	getline(cin, nome);					//comando para aceitar nomes com espaço
	cout << "Insira sua idade: ";
	cin >> idade;

	system("cls");						//limpar console

	cout << "Nome: " << nome << endl << "Idade: " << idade;
}

