// Exercicio 2.cpp : Defines the entry point for the console application.
//Fa�a um algoritmo recursivo que imprima os n�meros de 1 at� 20 na tela chamando 20 vezes a fun��o recursiva.

#include "stdafx.h"
#include <iostream>
using namespace std;

//escrever um numero de 1 � 20.
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

