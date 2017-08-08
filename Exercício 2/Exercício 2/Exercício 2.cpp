// Exercício 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double nota1, nota2, nota3, nota_final;

	cout << "Insira suas notas:" << endl;
	cin >> nota1 >> nota2 >> nota3;

	nota_final = (nota1 + nota2 + nota3) / 3;

	if (nota_final >= 6.0) {
		cout << "Aprovado";
	}
	else {
		cout << "Reprovado";
	}
	cout << endl;

	system("pause");
}

