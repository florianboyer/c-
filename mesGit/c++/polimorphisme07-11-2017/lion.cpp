#include "lion.h"


Lion::Lion(string animalNom, string animalDdn, Animal* animalPere, Animal* animalMere, int lionTailleCriniere)
	:Animal( animalNom, animalDdn, animalPere, animalMere)
{
	tailleCriniere = lionTailleCriniere;
}

void Lion::afficher()
{
	//zazie(ps: maxime)
	cout << "Je suis un lion de la savane, je suis un lionceaux du desert, tourne et tourne dans la savane. Je suis un lionceaux du desert"<<endl;
	crier();
	cout << "Je posede une criniere de" << tailleCriniere << "cm" << endl;
	Animal::afficher();

}

void Lion::crier()
{
	cout << "GREEEEEEEEEUUUUUUUUUHHHHH"<<endl;
}