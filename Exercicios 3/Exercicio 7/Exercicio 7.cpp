// Exercicio 7.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Preencher e exibir um array de 5 posições
int main()
{
	//declarando o array
	const int posicoes = 5;
	int numeros[posicoes] = { 0 }; 
    
	//solicitando os numeros
	cout << "Insira 5 numeros:\n";
	for (int cont = 0; cont < posicoes; cont++) {
		cin >> numeros[cont];
	}

	//exibindo o array
	cout << endl;
	for (int cont = 0; cont < posicoes; cont++) {
		cout << numeros[cont] << " ";
	}

	cout << endl;

}

