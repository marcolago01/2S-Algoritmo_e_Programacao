// Exercicio 3.cpp : Defines the entry point for the console application.
//Fa�a um algoritmo recursivo que converta um n�mero inteiro para um n�mero bin�rio.

#include "stdafx.h"
#include <iostream>;
using namespace std;

void converterIntBinario(int num) {
	if (num / 2 == 0) {
		cout << num % 2;
		return;
	}
	converterIntBinario(num / 2);
	cout << num % 2;
	
}

int main()
{
	converterIntBinario(64);
	cout << endl;
}

