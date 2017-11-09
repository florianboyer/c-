#ifndef LION
	#define LION

#include "animal.h"

using namespace std;

class Lion: public Animal
{
	private:
		int tailleCriniere;

	public:
		Lion(string animalNom, string animalDdn, Animal* animalPere, Animal* animalMere, int lionTailleCriniere);
		void afficher();
		void crier();
};	

	#endif
