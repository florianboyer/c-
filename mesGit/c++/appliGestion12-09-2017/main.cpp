//appel du fichier de la classe Personne
#include "personne.h"
#include "personne.cpp"
#include <vector>
//creation dun vecteur personne contenant 3 places
vector<Personne>vectPersonne(3);

int main()	
{
	//creation d'une variable pour stocker le choix de l'utilisateur
	char choixUtilisateur;

	//debut de la boucle de choix
	do{
		//creation des differente options possible
		cout<<"Choisissez votre action: "<<endl;
		cout<<"\t a pour Afficher " <<endl;
		cout<<"\t j pour aJouter"<<endl;
		cout<<"\t r pour Rechercher"<<endl;
		cout<<"\t q pour Quitter"<<endl;
		cin>>choixUtilisateur;

		switch(choixUtilisateur){
			case (int)'a':	affiche();	 	break;	
			case (int)'j': 	saisir();		break;
			case (int)'r':	recherche();	break;
			case (int)'q':					break;
		}
	}	
				while(choixUtilisateur=!q);
					break;
					return 0;	
}


//On va definir nos fonctions

//fonctions saisir "J".
void saisir()
{
	string nom;
	string prenom;
	int age;

	cout<<"votre nom: ";
	getline(cin,nom);
	cout<<"votre prenom: ";	
	getline(cin,prenom);
	cout<<"votre age: ";
	getline(cin,age);

//on rentre les infos dans la classe personne que l'on a creer au prealable dans un autre fichier
	vectPersonne.push_back(Personne(nom,prenom,age));

}

//fonctions affiche "A"
void affiche()
{
	for (int nombreDePersonne = 0; nombreDePersonne < vectPersonne.size(); ++nombreDePersonne)
	{
		cout<<Personne::nom<<" ";
		cout<<Personne::prenom<<" ";
		cout<<Personne::age<<endl;	
	}
	
}

//fonction recherche "R"
void recherche()
{
	//creation des variables que nous allons utiliser dans la fonction recherche
	string prenomRechercher;
	string nomRechercher;
	char lettreRechercher;
	char choixRecherche;
	int listeDesPersonnes=0;
	string premiereLettre;

	//debut de la recherche en affinant le resultat 
	cout<<"Voulez vous rechercher par prenom ou par nom?";
	
	//choix de la recherche sur le nom ou le prenom
	switch(choixRecherche){
			case (int)'p':	<< "Prenom"	<< prenomRechercher <<		break;	
			case (int)'n': 	<< "Nom"	<< nomRechercher 	<<		break;
	}

	//lettre qui va debuter la recherche
	cout<< "quelle est votre recherche";
	cin >>lettreRechercher;

	//on va rechercher sur ce que l'utilisteur a choisis 

	if (choixRecherche==prenomRechercher)
	{
		//on creer une boucle permettant de rechercher les personnes correspondant à la recherche
		while(listeDesPersonnes<vectPersonne.size()){
			//si jamais on trouves une correspodance on affiche les infos de la personne
			if(premiereLettre::prenom.vectPersonne[0] = lettreRechercher){
				cout<<Personne::nom<<" ";
				cout<<Personne::prenom<<" ";
				cout<<Personne::age<<endl;	
			}
			listeDesPersonnes++ //on rajoute un a personne pour continuer a l'element suivant 
		}
	}
	
	else (choixRecherche==nomRechercher)
	{//on creer une boucle permettant de rechercher les personnes correspondant à la recherche
		while(listeDesPersonnes<vectPersonne.size()){
			//si jamais on trouves une correspodance on affiche les infos de la personne
			if(premiereLettre::prenom.vectPersonne[0] = lettreRechercher){
				cout<<Personne::nom<<" ";
				cout<<Personne::prenom<<" ";
				cout<<Personne::age<<endl;	
			}
			listeDesPersonnes++ //on rajoute un a personne pour continuer a l'element suivant 
		}
}