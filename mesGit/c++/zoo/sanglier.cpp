#include "sanglier.h"


Sanglier::Sanglier(string animalNom, string animalDdn, Animal* animalPere, Animal* animalMere, int sanglierTailleDefense)
	:Animal( animalNom, animalDdn, animalPere, animalMere)
{
	tailleDefense = sanglierTailleDefense;
}

void Sanglier::afficher()
{

	cout << "Tous les sangliers les sangliers stach stach" << endl;
	crier();
	cout << "Je posede des defense de" << tailleDefense << "cm" << endl;
	Animal::afficher();

}

void Sanglier::crier()
{
	cout << "GROUAINNNNNN"<<endl;
}