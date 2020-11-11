#pragma once
#include <iostream>
#include <string>
#include "Voiture.h"


Voiture maVoitureStatique1;


void test() {

	static Voiture maVoitureStatique2;

	Voiture maVoitureDynamique;

	maVoitureStatique1.démarrer();
	maVoitureStatique2.démarrer();
	maVoitureDynamique.démarrer();


	maVoitureStatique1.nbChevaux = 5;
	maVoitureStatique2.nbChevaux = 6;
	maVoitureDynamique.nbChevaux = 7;

}

int main() {

	test();

	test();

	std::string pause;
	std::cin >> pause;

	return 0;
}


