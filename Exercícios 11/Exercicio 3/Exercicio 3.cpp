/*
Exercícios

Sua loja conta com 10 produtos em estoque. E por conta de um problema, você terá
de refazer o cadastro dos produtos.

Cada produto armazenado no estoque possui um código de identificação, além disso, os
produtos possuem nome, preço e um percentual de desconto (podendo ser 0).

Crie uma estrutura para definir seus produtos.
Depois disso seu programa principal deve exibir um menu contendo as 3 opções:

Cadastrar produtos;
Exibir todos os produtos;
Exibir produtos em promoção.

*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Menu.h"
using namespace std;

struct produto {
	int identificacao;
	string nome;
	float preco,
		desconto;
};

int main()
{
	const int TAMANHO_ARRAY = 10;
	produto estoque[TAMANHO_ARRAY];


}

