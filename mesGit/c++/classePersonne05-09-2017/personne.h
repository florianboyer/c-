#include <iostream>
using namespace std;

//création d'une classe personne avec les atributs nom prenom et âge
class Personne
{
private:
	string nom;
	string prenom;
	int age;
public:
	//Debut des accesseurs
	string getNom();
	void setNom(string leNom);
	string getPrenom();
	void setPrenom(string lePrenom);
	int getAge();
	void setAge( int monAge);
	//debut des methodes
	void affiche(); //methode pour afficher
	void saisir(); //methode pour la saisie 
	
};		