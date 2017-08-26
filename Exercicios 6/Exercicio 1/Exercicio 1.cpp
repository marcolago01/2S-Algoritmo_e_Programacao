// Exercicio 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Validador.h"
using namespace std;


int main()
{
	setlocale(LC_ALL,"Portuguese");
	string numero_celular;

	cout << "Insira seu numero de celular respeitando o seguinte formato "
		<< "(47)XXXXX-XXXX"
		<< endl;

	cin >> numero_celular;
	cout << numero_celular.length();
	
	do {
		cout << "Insira seu numero de celular respeitando o seguinte formato "
			<< "(47)XXXXX-XXXX"
			<< endl;
		getline(cin, numero_celular);

		if (validarNumeroTelefoneCelular(numero_celular)) {
			cout << endl << "Número válido";
		}
		else {
			system("cls");
			cout << endl << "Verifique o número digitado se respeita o formato exibido";
		}
	} while (validarNumeroTelefoneCelular(numero_celular) == false);
	
}

