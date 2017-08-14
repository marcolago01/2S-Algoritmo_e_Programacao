// Exercicios 2.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Solicitar um numero e exibir ele sempre positivo
int main()
{
	float numero = 0;

	//recebe o valor do usuario
	cout << "Insira um numero: ";
	cin >> numero;

	//verifica se o numero é negativo e converte ele
	if (numero < 0) {
		numero = numero*(-1);
	}

	//exibi o resultado na tela
	cout << "Numero: " << numero << endl;
}

