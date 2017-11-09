#include "animal.h"


int main()
{
	Animal 	bamby("Bamby","10/02/1950",NULL,NULL);
	bamby.afficher();
	Animal::afficherNbrAnimaux();
	Animal pumba("Pumba","11/05/2005",NULL,NULL);
	pumba.afficher();
	Animal::afficherNbrAnimaux();

	return 0;
}