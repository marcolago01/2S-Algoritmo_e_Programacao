// Exercicio 1.cpp : Defines the entry point for the console application.
//Faça um algoritmo recursivo que imprima os números de 20 até 1 na tela chamando 20 vezes a função recursiva.

#include "stdafx.h"
#include <iostream>
using namespace std;

//Escrever um numero de 20 até 1
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

