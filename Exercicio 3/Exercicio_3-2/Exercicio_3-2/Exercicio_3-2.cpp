// Exercicio_3-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int tabuada = 1;		//declarando variavel

	//Fa�a enquanto a variavel tabuada chegue at� 10
	do {
		//Multiplica a variavel "tabuada" de 1 at� 10 e exibe na tela tabulada
		for (int vezes = 1; vezes <= 10; vezes++) {
			cout << (tabuada*vezes) << "\t";
		}
		tabuada++; //evitar loop no fa�a-enquanto
	} while (tabuada <= 10);
}

