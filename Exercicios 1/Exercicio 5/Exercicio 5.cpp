// Exercicio 5.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Programa para relizar o calculo da media de 3 notas
int main()
{
	//declarando variaveis
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;

	//recebendo os valores necessários do usuario.
	cout << "Insira suas 3 notas: " << endl;
	cin >> n1 >> n2 >> n3;

	//Calculando a média
	media = (n1 + n2 + n3) / 3;

	//Exibindo resultado
	system("cls");
	cout << "Média: " << media << endl;
}

