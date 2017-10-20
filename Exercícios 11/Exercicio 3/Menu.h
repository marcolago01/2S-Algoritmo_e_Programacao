#ifndef MENU_H
#define MENU_H

const int
	CAMPO_IDENTIFICACAO=1,
	CAMPO_NOME=2,
	CAMPO_PRECO=3,
	CAMPO_DESCONTO=4;

void cadastroProduto(produto vetor, int tamanhoArray) {
	for (int posicao = 0;posicao < tamanhoArray;posicao++) {

		strings(CAMPO_IDENTIFICACAO, posicao);
		cin >> vetor.identificacao[posicao];
		strings(CAMPO_NOME, posicao);
		cin >> vetor.nome[posicao];
		strings(CAMPO_PRECO, posicao);
		cin >> vetor.preco[posicao];
		strings(CAMPO_DESCONTO, posicao);
		cin >> vetor.desconto[posicao];
	}
}
void exibirProdutos;

/*
CAMPO_IDENTIFICACAO=1,
CAMPO_NOME=2,
CAMPO_PRECO=3,
CAMPO_DESCONTO=4;
*/
void strings(int opcao,int posicao) {
	switch (opcao)
	{
	case CAMPO_IDENTIFICACAO:
		cout << "Insira o código do produto " << posicao << endl;
		break;
	case CAMPO_NOME:
		cout << "Insira o nome do Produto " << posicao << endl;
		break;
	case CAMPO_PRECO:
		cout << "Insira o preço do produto " << posicao << endl;
		break;
	case CAMPO_DESCONTO:
		cout << "Insira o desconto do produto " << posicao << endl;
		break;
	default:
		cout << "ERRO OPÇÃO CAMPOS!";
		break;
	}
}


#endif