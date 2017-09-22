// Exercicio6.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "matematica.h"
#include <iostream>
using namespace std;

/*
Faça um programa para uma calculadora com as seguintes operações (crie bibliotecas): adição, subtração, multiplicação e divisão.  
	O programa começa apresentando ao usuário um menu de opções semelhante ao mostrado abaixo: 

Calculadora:  1 - Adição 2 - Subtração 3 - Multiplicação 4 - Divisão 5 - Sair do programa Selecione sua opção: 
 
Crie uma função chamada Menu, que exiba o menu acima e retorna a opção do usuário para o programa principal. 
	De acordo com a opção do usuário, chame uma das seguintes funções: adicao, subtracao, multiplicacao, divisao, passando como parâmetros dois números reais também informados pelo usuário. 
	Se a opção for inválida, informe ao usuário e peça a ele para entrar com uma opção válida.
*/


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int opcao = 0;

	const int
		ADICAO = 1,
		SUBTRACAO = 2,
		MULTIPLICACAO = 3,
		DIVISAO = 4,
		SAIR = 5;

	float
		numero1,
		numero2;

	do {
		cout << "Calculadora:" << endl
			<< "		1-Adição" << endl
			<< "		2-Subtração" << endl
			<< "		3-Multiplicação" << endl
			<< "		4-Divisão" << endl
			<< "		5-Sair" << endl
			;
		cin >> opcao;
		if (opcao == 5) {
			break;
		}
		cout << endl 
			<< "Insira 2 numeros para o calculo"
			<< endl
			;
		cin >> numero1 >> numero2;

		switch (opcao) {
		case ADICAO:
			cout << "Resultado da Adição: " << soma(numero1, numero2) << endl;
			break;
		case SUBTRACAO:
			cout << "Resultado da Subtração: " << subtracao(numero1, numero2) << endl;
			break;
		case MULTIPLICACAO:
			cout << "Resultado da Multiplicação: " << multiplicacao(numero1, numero2) << endl;
			break;
		case DIVISAO:
			cout << "Resultado da Divisão: " << divisao(numero1, numero2) << endl;
		}

	} while (opcao != 5);
}

