// Exercicio 2.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//Realiza a solicitação de nome e idade e exibir na tela.
int main()
{
	//Definir o Console Portugues e declarar as variaveis necessárias
	setlocale(LC_ALL, "Brazil");
	string nome;
	int idade;

	//Recebendo as informações
	cout << "Insira seu nome: ";
	getline(cin, nome);			//getline para pegar o nome com espaços
	cout << "Agora insira sua idade: ";
	cin >> idade;

	//exibindo na tela os dados recebidos
	system("cls");
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << " anos" << endl;
    
}

