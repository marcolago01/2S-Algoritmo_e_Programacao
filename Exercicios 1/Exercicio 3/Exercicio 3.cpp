// Exercicio 3.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Programa para solicitar um valor ao usuario de 3 pe�as 
//e mostrar a soma deles
int main()
{
	//Definir console PT-BR e declara��o das variaveis
	setlocale(LC_ALL, "Portuguese");
	float preco1, preco2, preco3, total = 0;

	//recebimento dos valores
	cout << "Insira o valor dos 3 produtos: " << endl;
	cin >> preco1 >> preco2 >> preco3;

	//realiza��o do calculo
	total = preco1 + preco2 + preco3;
	
	//exibir o resultado da soma
	cout << "O valor dos produtos � de: R$" << total << endl;
}

