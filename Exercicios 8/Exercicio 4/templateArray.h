#pragma once
#ifndef templateArray_h
#define templateArray_h

//Ordenar Array com bubbleSort
//	ordenacaoCrescente = True
//	ordenacaoCrescente = False
template<typename T>
void bubbleSort(T array[], int tamanhoArray, bool ordenacaoCrescente) {
	for (int repeticao = 0; repeticao < tamanhoArray; repeticao++) {
		T aux;
		for (int posicao = 0; posicao < tamanhoArray - 1; posicao++) {
			if (ordenacaoCrescente && array[posicao] > array[posicao + 1]) {
				aux = array[posicao];
				array[posicao] = array[posicao + 1];
				array[posicao + 1] = aux;
			}
			else if (!ordenacaoCrescente && array[posicao] < array[posicao + 1]) {
				aux = array[posicao];
				array[posicao] = array[posicao + 1];
				array[posicao + 1] = aux;
			}
		}
	}
}

//Inverter ordem dos elementos
template<typename T>
void inverterOrdem(T array[], int tamanho) {
	int posicaoInversa = tamanho - 1;

	for (int posicao = 0; posicao < tamanho / 2; posicao++) {
		T aux;
		aux = array[posicao];
		array[posicao] = array[posicaoInversa];
		array[posicaoInversa] = aux;
		posicaoInversa--;
	}
}

template<typename T>
encontrar;
maiorValor;
menorValor;
maiorIndice;
menorIndice;

#endif