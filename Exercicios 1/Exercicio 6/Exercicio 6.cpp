// Exercicio 6.cpp : Define o ponto de entrada para a aplica��o de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//Realiza a media ponderada na segunte ordem Peso 2,4,4 e exibe na tela.
int main()
{
	//definindo variaveis
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;

	//recebendo os dados do usuario
	cout << "Insira suas 3 notas: " << endl;
	cin >> n1 >> n2 >> n3;

	//realizando o calculo da m�dia
	media = (n1 * 2 + n2 * 4 + n3 * 4) / 10;

	//exibindo a m�dia
	system("cls");
	cout << "M�dia: " << media << endl;
}

