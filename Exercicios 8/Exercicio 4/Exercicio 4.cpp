////////////////INCOMPLETO/////////////////////////
/*
Implemente uma biblioteca para trabalhar com arrays
de qualquer tipo. Ela deve conter as funções:

Ordenação por bubblesort (crescente ou decrescente);
Inverter ordem dos elementos;
Encontrar o maior valor;
Encontrar o índice do maior valor;
Encontrar o menor valor;
Encontrar o índice do menor valor;
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include "templateArray.h"
using namespace std;


int main()
{
	int vetor[10] = { 4,5,1,2,3,7,9,8,0,6 };
	float vetor1[10] = { 4.2,5.1,1.4,2.5,2.3,2.6,9.5,8,0,6 };
	char vetor2[10] = { 'a','v','e','6','t','4','3','h','j','u' };

	//bubbleSort<int>(vetor, 10, true);
	inverterOrdem<char>(vetor2, 10);

	for (int posicao = 0; posicao < 10; posicao++) {
		cout << vetor2[posicao] << " ";
	}
}

