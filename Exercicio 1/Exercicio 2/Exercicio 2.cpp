// Exercicio 2.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Recebe 3 notas e informa se passou ou nao tendo como média necessário 6

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;

	//Recebe os valores do usuario
	cout << "Insira suas 3 notas: " << endl;
	cin >> n1 >> n2 >> n3;

	//Realiza o calculo da média
	media = (n1 + n2 + n3) / 3;

	//limpa tela
	system("cls");

	//Verifica se o aluno é Aprovado ou não
	if (media >= 6) {
		cout << "Aprovado" << endl;
	}
	else {
		cout << "Reprovado" << endl;
	}
}

