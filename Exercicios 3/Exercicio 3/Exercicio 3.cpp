// Exercicio 3.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	//Definir console em PT-BR e Criar Variaveis, uma para o usuario inserir e um vetor para fazer a sequencia de Fibonacci
	setlocale(LC_ALL, "Portuguese");
	int numero, sequencia[3] = { 0,1,0 };


	cout << "Insira um número: ";
	cin >> numero;

	//"While" responsavel pela execução da sequencia de Fibonacci
	while (sequencia[2] <= numero) {
		sequencia[2] = sequencia[0] + sequencia[1];			//soma o numero atual e o ultimo numero
		sequencia[0] = sequencia[1];						//atribui o novo ultimo numero
		sequencia[1] = sequencia[2];						//atualiza o numero atual

															//verifica se a sequencia nao passou do numero informado pelo usuario
															//também é responsavel pela exibição da sequencia no console
		if (sequencia[2] <= numero) {
			cout << sequencia[2] << "  ";
		}
	}
}
