// AC1-M3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "interface.h"
#include "redesocial.h"
#include "validacoes.h"
#include "constantes.h"

#include <string>
;using namespace std;


int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	RedeSocial cobaias;
	int opcaoMenuPrincipal = 0;

	do {
		opcaoMenuPrincipal = exibirPaginaInicial();
		switch (opcaoMenuPrincipal)
		{
		case MENU::ENTRAR:
			//FAZER
			break;
		case MENU::CRIARUSUARIO:
			exibirCadastro();
			novoUsuario(cobaias);
		default:
			break;
		}
	} while (opcaoMenuPrincipal != 3);


}

