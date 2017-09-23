/*
Implemente uma função que realize a operação a troca de
valores entre duas variáveis de qualquer tipo.
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

template<typename T>
void troca(T &valor1, T &valor2) {
	T aux;

	aux = valor1;
	valor1 = valor2;
	valor2 = aux;

}

int main()
{
	int	num1, num2;
	float num3, num4;
	char c1, c2;

	cout << "Insira valores: \n";
	cin >> c1 >> c2;

	troca<char>(c1, c2);

	cout << endl << c1 << "  " << c2;
}

