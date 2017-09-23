/*
Implemente uma função que realize a escrita (utilizando cout) de um valor de qualquer tipo.
*/
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template<typename T>
void escrita(T valor) {
	cout << endl << valor << endl;
}

int main()
{
	string a;

	cin >> a;
	escrita<string>(a);
}

