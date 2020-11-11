#include <string>

using namespace std;

class Boite
{
public:
	string couleur;
	int taille;
	void ranger();
	
	Boite() {
		couleur = "noire";
		taille = 0;
	}
	
	Boite(string pCouleur, int pTaille) {
		couleur = pCouleur;
		taille = pTaille;
	}
};

