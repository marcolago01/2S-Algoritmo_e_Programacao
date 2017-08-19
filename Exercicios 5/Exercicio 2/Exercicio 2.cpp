// Exercicio 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string formas(int lados);

//Solicita os lados de uma forma e retorna qual forma �
int main()
{
	//definindo console PT-BR
	setlocale(LC_ALL, "Portuguese");
	int lados;

	//solicitando quantos lados
	cin >> lados;

	//exibi o resultado dos lados informados.
	cout << formas(lados);
}

//Fun��o responsavel por verificar os lados e retorna um resultado.
string formas(int lados) {
	switch(lados)
	{
	case 3:
		return "Tri�ngulo";
	case 4:
		return "Quadrado";
	case 5:
		return "Pent�gono";
	default:
		return "Valor Inv�lido";
	}
}



