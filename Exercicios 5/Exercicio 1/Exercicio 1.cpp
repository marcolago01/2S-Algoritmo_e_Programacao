// Exercicio 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//Criar um programa que recebe 2 notas
//Criar uma fun��o que calcular a m�dia
//Criar uma fun��o que exibi se foi aprovado.

float calcular_media(float nota1, float nota2);
string aprovado_reprovado(float media);

int main()
{
	float nota1, nota2, media;

	//Recebendo notas
	cout << "Insira as notas: " << endl;
	cin >> nota1 >> nota2;

	//calculando m�dia
	media=calcular_media(nota1, nota2);

	//exibindo resultado
	cout << aprovado_reprovado(media);
}

//fun��o para calcular a m�dia de dois valores
float calcular_media(float nota1, float nota2) {
	float media;

	media = (nota1 + nota2) / 2;

	return media;
}

//Validar se foi aprovado
string aprovado_reprovado(float media) {
	if (media >= 6) {
		return "Aprovado";
	}
	else {
		return "Reprovado";
	}
}


