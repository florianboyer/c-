#include "kangourou.h"

void Kangourou::crier()
{
	cout << "Je siffle"<<endl;
}

void Kangourou::afficher()
{
	cout << "Je suis un kangourou" << endl;
	Animal::afficher();
}

int Kangourou::nbrKangourou = 0;

void Kangourou::afficherNbrKangourou()
{
	cout << " Votre zoo posséde" << nbrKangourou << " kangourou(x)" << endl << endl;
}

Kangourou::Kangourou (string leNom,string laDdn, Animal* lePere, Animal *laMere)
		  :Animal(leNom,laDdn,lePere,laMere)
		  {
		  	nbrKangourou++;
		  }
Kangourou:: ~Kangourou()
{
	nbrKangourou--;
}
