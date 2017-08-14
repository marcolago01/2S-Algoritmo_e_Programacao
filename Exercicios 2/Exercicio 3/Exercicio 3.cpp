// Exercicio 3.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//realiza uma verificação se o numero é impar ou par
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero = 0;

	//recebe os valores do usuário
	cout << "Insira o número: ";
	cin >> numero;

	//limpa tela
	system("cls");

	//realiza a verificação e exibição na tela do resultado
	if (numero % 2 == 0) {
		cout << "Numero Par";
	}
	else {
		cout << "Numero Impar";
	}
	cout << endl;
}

