// Exercicio 7.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Programa que realiza o calculo do novo valor do salário de um usuario
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario, salario_novo, aumento;

	//Solicitando os dados necessarios ao usuario
	cout << "Insira seu salário: ";
	cin >> salario;
	cout << "Agora insira seu aumento (Em porcentagem %): ";
	cin >> aumento;

	//Realizando o calculo
	salario_novo = (salario*(aumento + 100)) / 100;

	//exibindo o resultado
	system("cls");
	cout << "Salário Atual: " << "R$"<< salario << " -------> Salário novo: " << "R$" << salario_novo << endl;
}

