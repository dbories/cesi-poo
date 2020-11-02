#include <iostream>
#include <string>
#include "Voiture.h"

int main() {

	Voiture maVoiture;

	maVoiture.démarrer();

	std::string pause;
	std::cin >> pause;

	return 0;
}