// Exercicio 2.cpp : Defines the entry point for the console application.
//Faça um algoritmo recursivo que imprima os números de 1 até 20 na tela chamando 20 vezes a função recursiva.

#include "stdafx.h"
#include <iostream>
using namespace std;

//escrever um numero de 1 à 20.
void escreva(int num) {
	cout << num << " ";
	if (num == 20) {
		return;
	}
	escreva(num + 1);
}


int main()
{
	escreva(1);
}

