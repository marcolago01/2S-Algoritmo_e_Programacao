// AC1-M1.cpp : Define o ponto de entrada para a aplicação de console.
//

//Incluindo bibliotecas a ser utilizada
#include "stdafx.h"
#include "arrays.h"
#include <iostream>
#include <time.h>
using namespace std;


int main()
{
	/*Definindo Console PT-BR
	Gerand Seed para o Rand
	Declarando constantes e variaveis para teste da biblioteca
	*/
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	const int TAMANHO_VETOR = 40;
	int vetor[TAMANHO_VETOR] = { 0 };
	int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ] = { 0 };

	//preencher um vetor com numeros aleatórios e exibir
	cout << "Valores do vetor: " << endl;
	for (int contador = 0; contador < TAMANHO_VETOR; contador++) {
		vetor[contador] = rand() % 301;
		cout << vetor[contador] << "\t";
	}
	cout << endl << endl;
	
	//Preencher Matriz com numero aleatórios
	cout << "Valores da matriz: " << endl;
	for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
		for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
			matriz[linha][coluna] = rand() % 201;
			cout << matriz[linha][coluna] << "\t";
		}
		cout << endl;
	}
	
	//Chamando funções e verificando resultados no console

	bubbleSort(vetor, TAMANHO_VETOR, false);
	cout << endl;

	cout << "Maior valor do vetor: " << maiorValorEmVetor(vetor,TAMANHO_VETOR) << endl;
	cout << "Menor valor do vetor: " << menorValorEmVetor(vetor, TAMANHO_VETOR) << endl;
	
	//Teste maior valor Matriz
	cout << endl <<
		"O Maior valor da matriz é: " <<
		maiorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_COMPLETA) << endl;
	
	//Teste menor valor Matriz
	cout << endl <<
	"O Menor valor da matriz é: " <<
	menorValorEmMatriz(matriz, ESCOPO_BUSCA_MATRIZ_COMPLETA) << endl;
	
}

