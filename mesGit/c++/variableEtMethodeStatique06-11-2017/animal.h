#ifndef ANIMAL
	#define ANIMAL
#include <iostream>

using namespace std;

class Animal
{
private:
	string nom;
	string dateDeNaissance;
	Animal* pere;
	Animal* mere;

public:

	Animal(string animalNom,string animalDdn, Animal* animalPere, Animal* animalMere);
	~Animal();
	void afficher();
	static int nbrAnimaux;
	static void afficherNbrAnimaux();

};	

	#endif
