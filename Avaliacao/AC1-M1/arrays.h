//Enviando comando ao compilador
#ifndef arrays
#define arrays

//incluindo bibliotecas a ser utilizada
#include <iostream>
using namespace std;

//constante para tamanho da matriz 5x5
const int TAMANHO_MATRIZ = 5;

//declaração de constantes para uso em parametros
const int
ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL = 1,
ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA = 2,
ESCOPO_BUSCA_MATRIZ_DIAGONAIS = 3,
ESCOPO_BUSCA_MATRIZ_COMPLETA = 4;

/*
Esta função deverá implementar o bubble sort, 
considerando que quando ordenacaoCrescente, for true
sua ordenação será crescente, ao contrário implemente ordenação decrescente
*/
void bubbleSort(int vetor[], int tamanho, bool ordenacaoCrescente) {
	//se verdadeiro, organizar em forma crescente
	if (ordenacaoCrescente) {
		for (int repeticao = 0; repeticao < tamanho; repeticao++) {

			int aux = 0;		//variavel para troca de valores

			for (int posicao = 0; posicao < tamanho - 1; posicao++) {
				if (vetor[posicao] > vetor[posicao + 1]) {
					aux = vetor[posicao];
					vetor[posicao] = vetor[posicao + 1];
					vetor[posicao + 1] = aux;
				}
			}
		}
	}

	//se falso, organizar de forma decrescente
	else {
		for (int repeticao = 0; repeticao < tamanho; repeticao++) {

			int aux=0;		//variavel para troca de valores

			for (int posicao = 0; posicao < tamanho-1; posicao++) {
				if (vetor[posicao]<vetor[posicao + 1]) {
					aux = vetor[posicao];
					vetor[posicao] = vetor[posicao + 1];
					vetor[posicao + 1] = aux;
				}
			}
		}
	}

	//Exibir o Bubble Sort organizado
	if (ordenacaoCrescente) {
		cout << endl <<
			"Ordenação crescente: " << endl;
	}
	else
	{
		cout << endl <<
			"Ordenação decrescente: " << endl;
	}
	for (int contador = 0; contador < tamanho; contador++) {
		cout << vetor[contador] << "\t";
	}
	cout << endl;
}

//Esta função deve retornar o maior elemento do vetor
int maiorValorEmVetor(int vetor[], int tamanho) {
	int maior = vetor[0];
	for (int contador = 0; contador < tamanho; contador++) {
		if (maior < vetor[contador]) {
			maior = vetor[contador];
		}
	}
	
	return maior;
}

//Esta função deve retornar o menor elemento do vetor
int menorValorEmVetor(int vetor[], int tamanho){
	int menor = vetor[0];
	for (int contador = 0; contador < tamanho; contador++) {
		if (menor > vetor[contador]) {
			menor = vetor[contador];
		}
	}

	return menor;
}

/*
Esta função deve retornar o maior elemento da matriz, levando em consideração as
constantes da biblioteca
	ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL
	ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA
	ESCOPO_BUSCA_MATRIZ_DIAGONAIS
	ESCOPO_BUSCA_MATRIZ_COMPLETA
*/
int maiorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {
	int maior;
	bool primeiro_valor = true;	//variavel para pegar o primeiro valor para comparação

	switch (escopoBusca)
	{
	//ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL
	case 1:
		for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
			for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
				//se a linha e coluna for igual é a diagonal principal
				if (linha == coluna) {
					//pegando o primeiro valor
					if (primeiro_valor) {
						maior = matriz[linha][coluna];
						primeiro_valor = false;
					}
					if (maior < matriz[linha][coluna]) {
						maior = matriz[linha][coluna];
					}
				}
			}
		}
		return maior;
	//ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA
	case 2:
		for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
			for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
				//se a soma da linha e coluna for igual ao tamanho da matriz-1
				if (linha+coluna == TAMANHO_MATRIZ-1) {
					//pegando o primeiro valor
					if (primeiro_valor) {
						maior = matriz[linha][coluna];
						primeiro_valor = false;
					}
					if (maior < matriz[linha][coluna]) {
						maior = matriz[linha][coluna];
					}
				}
			}
		}
		return maior;
	//ESCOPO_BUSCA_MATRIZ_DIAGONAIS
	case 3:
		for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
			for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
				//se a linha e coluna for igual é a diagonal principal
				if (linha + coluna == TAMANHO_MATRIZ - 1 || linha == coluna) {
					//pegando o primeiro valor
					if (primeiro_valor) {
						maior = matriz[linha][coluna];
						primeiro_valor = false;
					}
					if (maior < matriz[linha][coluna]) {
						maior = matriz[linha][coluna];
					}
				}
			}
		}
		return maior;
	//ESCOPO_BUSCA_MATRIZ_COMPLETA
	case 4:
		for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
			for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
				if (primeiro_valor) {
					maior = matriz[linha][coluna];
					primeiro_valor = false;
				}
				if (maior < matriz[linha][coluna]) {
					maior = matriz[linha][coluna];
				}
			}
		}
		return maior;
	default:
		cout << "Opção Inválida!" << endl;
		return 0;
	}
}

/*
Esta função deve retornar o menor elemento da matriz, levando em consideração as
constantes da biblioteca
ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL
ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA
ESCOPO_BUSCA_MATRIZ_DIAGONAIS
ESCOPO_BUSCA_MATRIZ_COMPLETA
*/
int menorValorEmMatriz(int matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ], int escopoBusca) {
	int menor;
	bool primeiro_valor = true;	//variavel para pegar o primeiro valor para comparação

	switch (escopoBusca)
	{
		//ESCOPO_BUSCA_MATRIZ_DIAGONALPRINCIPAL
	case 1:
		for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
			for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
				//se a linha e coluna for igual é a diagonal principal
				if (linha == coluna) {
					//pegando o primeiro valor
					if (primeiro_valor) {
						menor = matriz[linha][coluna];
						primeiro_valor = false;
					}
					if (menor > matriz[linha][coluna]) {
						menor = matriz[linha][coluna];
					}
				}
			}
		}
		return menor;
		//ESCOPO_BUSCA_MATRIZ_DIAGONALSECUNDARIA
	case 2:
		for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
			for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
				//se a soma da linha e coluna for igual ao tamanho da matriz-1
				if (linha + coluna == TAMANHO_MATRIZ - 1) {
					//pegando o primeiro valor
					if (primeiro_valor) {
						menor = matriz[linha][coluna];
						primeiro_valor = false;
					}
					if (menor > matriz[linha][coluna]) {
						menor = matriz[linha][coluna];
					}
				}
			}
		}
		return menor;
		//ESCOPO_BUSCA_MATRIZ_DIAGONAIS
	case 3:
		for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
			for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
				//se a linha e coluna for igual é a diagonal principal
				if (linha + coluna == TAMANHO_MATRIZ - 1 || linha == coluna) {
					//pegando o primeiro valor
					if (primeiro_valor) {
						menor = matriz[linha][coluna];
						primeiro_valor = false;
					}
					if (menor > matriz[linha][coluna]) {
						menor = matriz[linha][coluna];
					}
				}
			}
		}
		return menor;
		//ESCOPO_BUSCA_MATRIZ_COMPLETA
	case 4:
		for (int linha = 0; linha < TAMANHO_MATRIZ; linha++) {
			for (int coluna = 0; coluna < TAMANHO_MATRIZ; coluna++) {
				if (primeiro_valor) {
					menor = matriz[linha][coluna];
					primeiro_valor = false;
				}
				if (menor > matriz[linha][coluna]) {
					menor = matriz[linha][coluna];
				}
			}
		}
		return menor;
	default:
		cout << "Opção Inválida!" << endl;
		return 0;
	}
}

#endif
