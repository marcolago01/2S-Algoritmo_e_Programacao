// Exercicio 3.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Programa para solicitar um valor ao usuario de 3 peças 
//e mostrar a soma deles
int main()
{
	//Definir console PT-BR e declaração das variaveis
	setlocale(LC_ALL, "Portuguese");
	float preco1, preco2, preco3, total = 0;

	//recebimento dos valores
	cout << "Insira o valor dos 3 produtos: " << endl;
	cin >> preco1 >> preco2 >> preco3;

	//realização do calculo
	total = preco1 + preco2 + preco3;
	
	//exibir o resultado da soma
	cout << "O valor dos produtos é de: R$" << total << endl;
}

