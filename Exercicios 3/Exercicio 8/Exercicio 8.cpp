// Exercicio 8.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//solicitar 10 numeros
//armazenar em um vetor, calcular a m�dia
//e exibir os valores acima da m�dia junto com a m�dia.
int main()
{
	setlocale(LC_ALL, "Portuguese");
	//declarando o vetor e uma variavel para media
	const int v1_posicoes = 10;
	float
		v1_valores[v1_posicoes] = { 0 },
		media = 0;

	//solicitando os numeros
	cout << "Insira 10 numeros: \n";
	for (int cont = 0; cont < v1_posicoes; cont++) {
		cin >> v1_valores[cont];
		media = media + v1_valores[cont];	//somando a variavel m�dia com os valores
	}

	//calculando a m�dia
	media = media / 10;

	//exibindo a m�dia
	cout << "M�dia: " << media;

	//pular linha
	cout << endl;
	//Exibir n�meros acima da m�dia
	for (int cont = 0; cont < v1_posicoes; cont++) {
		if (v1_valores[cont] > media) {
			cout << v1_valores[cont] << " ";
		}
	}
}

