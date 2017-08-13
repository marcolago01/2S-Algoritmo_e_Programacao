// Exercicio 4.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Calcular o perimetro com o valor do raio inserido pelo usuario.
int main()
{
	//definindo variaveis e console para PT
	setlocale(LC_ALL, "Portuguese");
	float raio, perimetro;
	float pi = 3.14159265359;

	//recebendo o valor do usuario
	cout << "Insira o tamanho do raio em metros: ";
	cin >> raio;

	//realizando o calculo do perimetro
	perimetro = 2 * pi*raio;

	cout << perimetro << endl;
}

