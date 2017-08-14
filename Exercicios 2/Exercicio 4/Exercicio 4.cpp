// Exercicio 4.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//apartir de um caractere inserido pelo usuario, dizer se é vogal ou consoante.
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char letra;

	//Solicitando a letra ao usuario
	cout << "Insira uma letra: ";
	cin >> letra;

	//verificando o tipo de letra
	switch (letra) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << "Vogal";
		break;
	default:
		cout << "Consoante";
		break;
	}
}

