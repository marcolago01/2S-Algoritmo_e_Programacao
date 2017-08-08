// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int main()
{
	int numero;

	cout << "Insira um numero:  ";
	cin >> numero;

	if (numero < 0) {
		numero = numero* (-1);
	}
	cout << numero << endl;

	system("pause");
}

