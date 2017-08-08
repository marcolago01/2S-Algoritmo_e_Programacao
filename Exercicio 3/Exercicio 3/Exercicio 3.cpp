// Exercicio 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;


int main()
{
	int numero;

	cout << "Insira um numero: ";
	cin >> numero;
	if (numero % 2 == 0) {
		cout << "Este numero e par";
	}
	else if(numero % 2 != 0){
		cout << "Este numero e impar";
	}
	system("pause");
}

