// Exercicio 3.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//realiza uma verifica��o se o numero � impar ou par
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero = 0;

	//recebe os valores do usu�rio
	cout << "Insira o n�mero: ";
	cin >> numero;

	//limpa tela
	system("cls");

	//realiza a verifica��o e exibi��o na tela do resultado
	if (numero % 2 == 0) {
		cout << "Numero Par";
	}
	else {
		cout << "Numero Impar";
	}
	cout << endl;
}

