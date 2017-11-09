#include "animal.h"


int Animal::nbrAnimaux=0;
//constructeur
Animal::Animal(string animalNom,string animalDdn, Animal* animalPere, Animal* animalMere)
{
	nom = animalNom;
	dateDeNaissance = animalDdn;
	pere = animalPere;
	mere = animalMere;

	nbrAnimaux++;
}


//destructeur
Animal::~Animal()
{
	if (nbrAnimaux == 5){
		cout << "Votre animal ne c'est pas plus ici il a decidé de partir"		 << endl; 
	}
	if (nbrAnimaux == 4){
		cout << "Vous avez oublié de nourrire votre animal "					 << endl; 
	}
	if (nbrAnimaux == 3){
		cout << "Une mauvaise grippe est c'est un de vos animaux qui meurt"		 << endl; 
	}
	if (nbrAnimaux == 2){
		cout << "...-...Dans ce zoo, terrible zoo Pumba est mort ce sort...-..." << endl; 
	}
	if (nbrAnimaux == 1){	
		cout << "Apres une terrible epidemie" 									 << endl;

	}
	nbrAnimaux--;
	afficherNbrAnimaux();
}

//affichage
void Animal::afficher()
{
	cout << nom << " vient de rejoindre votre zoo" << endl;
	cout << " Il est née le:"  << dateDeNaissance << endl;
	if (pere == 0)
	{
		cout << "malheuresement il n'a pas de pere" << endl;
	}
	if (mere == 0)
	{
		cout << "malheuresement il n'a pas de mere" << endl;
	}
	if (pere == 0 and mere ==0)
	{
		cout << "c'est  ce que l'on appele le miracle de la nature"<< endl;
	}
	if (pere !=0 and mere !=0)
	{
		cout << "c'est parents s'appelent " << pere << ", " << mere <<endl;
	}

}

//afficher le nombre d'animaux que l'on a dans notre zoo

void 	Animal::afficherNbrAnimaux()
{
	if (nbrAnimaux==0)
	{
		cout << "Il n'y a malheuresement pas d'animal dans votre zoo"<< endl;
	}
	if (nbrAnimaux==1)
	{
		cout << "Il y a " << nbrAnimaux << " animal dans votre zoo" << endl;
	}
	if (nbrAnimaux>1)
	{
		cout << "Il y a " << nbrAnimaux << " animaux dans votre zoo" << endl;
	}
}