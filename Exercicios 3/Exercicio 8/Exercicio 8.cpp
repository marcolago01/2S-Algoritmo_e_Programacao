// Exercicio 8.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//solicitar 10 numeros
//armazenar em um vetor, calcular a média
//e exibir os valores acima da média junto com a média.
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
		media = media + v1_valores[cont];	//somando a variavel média com os valores
	}

	//calculando a média
	media = media / 10;

	//exibindo a média
	cout << "Média: " << media;

	//pular linha
	cout << endl;
	//Exibir números acima da média
	for (int cont = 0; cont < v1_posicoes; cont++) {
		if (v1_valores[cont] > media) {
			cout << v1_valores[cont] << " ";
		}
	}
}

