#include "application.h"

//cette fonction sert à faire tourner l'application
void Application::run()
{
	//declaration d'une variable pour la saisie du choix de l'utilisateur que l'on a recuperer precedement
	char leChoix;
	//creation d'une boucle pour la repetition du run; do while car l'on passe une fois au minimun dans la boucle
	do
	{
	afficherMenu();
	leChoix = saisieControleeDuChoixUtilisateur();
	realiseActionCorrespondantAuChoix(leChoix);
	}
	while(!(leChoix=='q'));
	int nbrPersonne=vectPersonne.size();

	for (int numPersonne = 0; numPersonne <nbrPersonne ; ++numPersonne)
	{
		delete(vectPersonne[numPersonne]);
	}
}

//cette fonction va permettre d'afficher le menu
void Application::afficherMenu()
{
//affichage des differentes possibilité
	cout << "\n Taper:"									<<endl;
	cout << "\t A pour Ajouter une personne"			<<endl;
	cout << "\t F pour aFficher toutes les personnes"	<<endl;
	cout << "\t R pour Rechercher une personne" 		<<endl;
	cout << "\t Q pour Quitter "						<<endl<<endl;
}

//cette fonction va permettre de savoir le choix de notre utilisateur
char Application::saisieControleeDuChoixUtilisateur()
{
	//declaration d'une variable pour la saisie du choix de l'utilisateur
    char leChoix;
    //creation d'une boucle pour la saisie du choix utilisateion du do while car l'on passe une fois au minimun dans la boucle
	do{
		//instruction de saisie pour l'utilisateur
		cout<<"Taper la lettre correspondante à votre choix: (a ou f ou r ou q): " << endl;
		//saisie par l'utilisateur de son choix
		cin>> leChoix;
		//pour vider le buffer et enlever la touche entrée de sa memoire 
		cin.ignore(1);
	}
	//si l'utilisateur c'est trompé de lettre on relance le choix 
	while(!(leChoix=='a' || leChoix=='f' || leChoix=='q' || leChoix=='r'));
	//on retourne le resultat de l'utilisateur.
	return leChoix;
}

//fonction qui ava relaiser le choix de l'utilisateur
void Application::realiseActionCorrespondantAuChoix (char leChoix)
{
	Personne o;
	//on declare un string pour contenir la recherche de l'utilisateur
	string chaineRecherchee;
	//on va effectuer une des actions choisis par l'utilisateur
	switch(leChoix)
	{
		case 'a': ajouterPersonne();
					break;
		case 'f': afficherToutesLesPersonnes();	
					break;
		case 'r':o=rechercherPersonne(chaineRecherchee);
				if(o.getNom()!="")
				{
					o.affiche();
				}
				else cout<<"\n\t\t Personne ne s'appelle comme ça!!!" << endl;
					break;
	}
}

//fonction pour ajouter une personne à notre base	
void Application::ajouterPersonne()
{
	Personne * pAAjouter = new Personne;
	pAAjouter->saisir();
	vectPersonne.push_back(pAAjouter);		
}

//fonction qui v afficher toutes les personnes qu'on l'on a dans notre appli
void Application::afficherToutesLesPersonnes()
{
	//declaration d'une variable avec le nbr de personnes total
	int nbrPersonne=vectPersonne.size();
	//creation d'une boucle pour afficher toutes les personnes
	for(int indicePersonne=0;indicePersonne<nbrPersonne;indicePersonne++)
	{
		cout<<"Personne numéro: " << indicePersonne+1;
		vectPersonne[indicePersonne]->affiche();//pointeur
	}//fin de la boucle
	if(nbrPersonne==0)
	{
		cout<<"\n\t Il n'y a personne d'enregistrer dans notre base. "<<endl;
	}

}

//fonction qui va nous permettre de rechercher si une personne existe 
Personne Application::rechercherPersonne(string chaineRecherchee)
{
	Personne y;
	cout<<"\n\t Saisisez le nom de la personne que vous voulez rechercher: "<<endl;
	getline(cin,chaineRecherchee);
	//declaration d'une variable avec le nbr de personnes total
	int nbrPersonne=vectPersonne.size();
	//creation d'une boucle pour afficher toutes les personnes
	for(int indicePersonne=0;indicePersonne<nbrPersonne;indicePersonne++)
	{
		if(chaineRecherchee == vectPersonne[indicePersonne]->getNom() )
		{
			cout<<"\n Nous avons retrouver votre ami(e)."<<endl;
			//vectPersonne[indicePersonne].affiche();
			return *vectPersonne[indicePersonne];
		}
	}//fin de la boucle
	return y;
}