#include "animal.h"
#include "lion.h"
#include "sanglier.h"
#include "kangourou.h"


int main()
{
	Sanglier bamby("Bamby","10/02/1950",NULL,NULL,15);//constructeur d'un sanglier nomé baby
	bamby.afficher(); //affiche les informations sur le sanglier bamby
	Animal::afficherNbrAnimaux(); //affiche le nombre d'animaux que le zoo possede pour le moment
	Lion pumba("Pumba","11/05/2005",NULL,NULL,20);
	pumba.afficher();
	Animal::afficherNbrAnimaux();
	Kangourou kangou("junior","10/03/2010",NULL,NULL);
	kangou.afficher();
	Kangourou kangkangou("achil","02/10/1980",NULL,NULL);
	kangkangou.afficher();
	Animal rex("rex", "10/05/2005",NULL,NULL);
	Kangourou::afficherNbrKangourou(); //affiche le nombre de kagourou qu'il y a dans le zoo
	Animal::afficherNbrAnimaux();


	return 0;
}