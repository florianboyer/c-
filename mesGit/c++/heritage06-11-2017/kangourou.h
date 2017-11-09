#ifndef KANGOUROU
	#define KANGOUROU

#include "animal.h"

using namespace std;


class Kangourou: public Animal
	{
public:
	static void crier();
	void afficher();
	static int nbrKangourou;
	static void afficherNbrKangourou();
	Kangourou (string leNom,string laDdn, Animal* lePere, Animal *laMere);
	~Kangourou();
};

#endif