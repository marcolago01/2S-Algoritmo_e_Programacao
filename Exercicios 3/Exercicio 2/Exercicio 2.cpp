// Exercicio 2.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int tabuada = 1;		//declarando variavel

							//Faça enquanto a variavel tabuada chegue até 10
	do {
		//Multiplica a variavel "tabuada" de 1 até 10 e exibe na tela tabulada
		for (int vezes = 1; vezes <= 10; vezes++) {
			cout << (tabuada*vezes) << "\t";
		}
		cout << endl;
		tabuada++; //evitar loop no faça-enquanto
	} while (tabuada <= 10);
}

