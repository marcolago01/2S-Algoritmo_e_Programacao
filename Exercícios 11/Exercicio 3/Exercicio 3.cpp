/*
Exerc�cios

Sua loja conta com 10 produtos em estoque. E por conta de um problema, voc� ter�
de refazer o cadastro dos produtos.

Cada produto armazenado no estoque possui um c�digo de identifica��o, al�m disso, os
produtos possuem nome, pre�o e um percentual de desconto (podendo ser 0).

Crie uma estrutura para definir seus produtos.
Depois disso seu programa principal deve exibir um menu contendo as 3 op��es:

Cadastrar produtos;
Exibir todos os produtos;
Exibir produtos em promo��o.

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

