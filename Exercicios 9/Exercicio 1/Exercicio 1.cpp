// Exercicio 1.cpp : Defines the entry point for the console application.
//Fa�a um algoritmo recursivo que imprima os n�meros de 20 at� 1 na tela chamando 20 vezes a fun��o recursiva.

#include "stdafx.h"
#include <iostream>
using namespace std;

//Escrever um numero de 20 at� 1
void escreva(int num) {

	cout << num << " ";

	if (num == 1) {
		return;
	}
	escreva(num - 1);
}


int main()
{
	escreva(20);
}

