// Exercicio5.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Escreva um programa que leia o raio de um círculo e faça duas funções : uma função chamada
//area que calcula e retorna a área do círculo e outra função chamada perimetro que calcula e
//retorna o perímetro do círculo.
	//Área = π * r
	//2
	//Perímetro = π * 2 * r

float area(float raio);
float perimetro(float raio);

int main()
{
	float raio;
	cout << "Insira o raio: ";
	cin >> raio;

	cout << "Area: " << area(raio) << endl
		<< "Perimetro: " << perimetro(raio) << endl;
}

float area(float raio) {
	float PI = 3.14159;

	return PI*raio;
}

float perimetro(float raio) {
	float PI = 3.14159;

	return PI * 2 * raio;
}
