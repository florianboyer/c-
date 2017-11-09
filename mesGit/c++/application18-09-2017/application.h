#include <iostream>
#include <vector>
#include "personne.h"
using namespace std;

class Application
{
private:
	//creation dun vecteur personne contenant 3 places
	vector<Personne>vectPersonne;
	void afficherMenu();
	char saisieControleeDuChoixUtilisateur();
	void realiseActionCorrespondantAuChoix(char leChoix);
	void ajouterPersonne();
	void afficherToutesLesPersonnes();
	Personne rechercherPersonne(string chaineRecherche);
public:
	void run();
};