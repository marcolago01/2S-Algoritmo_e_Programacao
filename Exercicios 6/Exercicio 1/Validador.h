#pragma once
#ifndef validador
#define validador

#include <iostream>
#include <string>
using namespace std;

//Validar um número de celular
bool validarNumeroTelefoneCelular(string &telefone) {
	//se o numero respeita o seguinte formato XXXXX-XXXX
	if (telefone.length() == 10) {
		//O numero tem que começar com 9 devido a ser codigo de area de SC
		//Se nao for 9 retorna falso
		if (telefone[0] != 9) {
			cout << endl << 
				"Erro 3: "<<
				"O número começa com um número não válido para o código de área 47."
				<< endl;
			return false;
		}
		else {
			//Se o numero após o primeiro 9 começar com
			//outro numero que nao seja 7 ou 8 ou 9, retorna falso
			if (telefone[2] != 7 || 8 || 9) {
				cout << endl
					<< "Erro 4: "
					<< "Este número não é valido"
					<< endl;
				return false;
			}
			else {
				return true;
			}
		}
	}
	else {
		if (telefone.length() < 10) {
			cout << endl << "Erro 1: Está faltando digito" << endl;
		}
		else if (telefone.length() > 10) {
			cout << endl << "Erro 2: Há numero demais" << endl;
		}
		return false;
	}
}


#endif