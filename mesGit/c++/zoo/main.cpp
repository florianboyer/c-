#include "animal.h"
#include "lion.h"
#include "sanglier.h"
#include "kangourou.h"
#include <vector>


int main()
{

	vector <Animal *> vectMesAnimaux;
	vectMesAnimaux.push_back(new Sanglier("Bamby","10/02/1950",NULL,NULL,15));
	vectMesAnimaux.push_back(new Lion("Pumba","11/05/2005",NULL,NULL,20));
	vectMesAnimaux.push_back(new Kangourou("junior","10/03/2010",NULL,NULL));
	vectMesAnimaux.push_back(new Kangourou("achil","02/10/1980",NULL,NULL));
	vectMesAnimaux.push_back(new Lion ("simba","04/04/1988",NULL,NULL, 485));
	unsigned int nombreAnimaux = Animal::nbrAnimaux;
	for (unsigned int noAnim = 0; noAnim < nombreAnimaux; noAnim ++)
	{
		vectMesAnimaux[noAnim]-> afficher();
		//vectMesAnimaux[noAnim]-> crier();
	}
	
	//return 0;
}