//appel des bibliotheques
#include <iostream>
#include <vector> 

using namespace std;


int main()
{
	//creation d'un vecteur 
	vector<int> vectNombre;
	//creation de trois cellule
	vectNombre.push_back(6);
	vectNombre.push_back(12);
	vectNombre.push_back(24);

	//on crée une boucle qui va lire chaque cellule une par une et nous les affichers
	for (int numeroTour = 0; numeroTour < vectNombre.size(); ++numeroTour)
	{
		cout<< "Vous etes a l'indice "<<numeroTour<<" il est de: "<< vectNombre.at(numeroTour) <<" ou 	"<<vectNombre[numeroTour]<<endl;
	}
	return 0;
}