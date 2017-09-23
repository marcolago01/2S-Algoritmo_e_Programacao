/*
Implemente uma função que realize a leitura (utilizando cin) de um valor de qualquer tipo.
*/
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template<typename T>
void leitura(T &valor) {
	cin >> valor;
}

int main()
{
	bool a;
	leitura<bool>(a);

	cout << endl << a << endl;
}

