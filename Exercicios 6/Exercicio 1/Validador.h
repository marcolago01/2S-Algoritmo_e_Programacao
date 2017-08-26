#pragma once
#ifndef validador
#define validador

#include <iostream>
#include <string>
using namespace std;

//Validar um n�mero de celular
bool validarNumeroTelefoneCelular(string &telefone) {
	//se o numero respeita o seguinte formato XXXXX-XXXX
	if (telefone.length() == 10) {
		//O numero tem que come�ar com 9 devido a ser codigo de area de SC
		//Se nao for 9 retorna falso
		if (telefone[0] != 9) {
			cout << endl << 
				"Erro 3: "<<
				"O n�mero come�a com um n�mero n�o v�lido para o c�digo de �rea 47."
				<< endl;
			return false;
		}
		else {
			//Se o numero ap�s o primeiro 9 come�ar com
			//outro numero que nao seja 7 ou 8 ou 9, retorna falso
			if (telefone[2] != 7 || 8 || 9) {
				cout << endl
					<< "Erro 4: "
					<< "Este n�mero n�o � valido"
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
			cout << endl << "Erro 1: Est� faltando digito" << endl;
		}
		else if (telefone.length() > 10) {
			cout << endl << "Erro 2: H� numero demais" << endl;
		}
		return false;
	}
}


#endif