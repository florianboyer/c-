#ifndef SANGLIER
	#define SANGLIER

#include "animal.h"

using namespace std;

class Sanglier: public Animal
{
	private:
		int tailleDefense;

	public:
		Sanglier(string animalNom, string animalDdn, Animal* animalPere, Animal* animalMere, int sanglierTailleDefense);
		void afficher();
		void crier();
};	

	#endif
