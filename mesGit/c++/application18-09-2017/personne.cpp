//appel du fichier de la classe Personne
#include "personne.h"

//definition du constructeur
// Personne::Personne()
// {
// 	nom="bob";
// 	age=	95;
// 	prenom="leponge";
// }

// Personne::Personne(string ceNom,string cePrenom,int cetAge)
// {
// 	nom=ceNom;
// 	prenom=cePrenom;
// 	age=cetAge;
// }
//fin des constructeurs	

//nom
string Personne::getNom()
{
	return nom;
}
void Personne::setNom(string leNom)
{
	nom=leNom;	
}

//prenom
string Personne::getPrenom()
{
	return prenom;
}
void Personne::setPrenom(string lePrenom)
{
	prenom=lePrenom;
}

//age
int Personne::getAge()
{
	return age;
}
void Personne::setAge(int monAge)
{	
	age=monAge;
}


//saisie du nom de la personne
void Personne::saisir()
{
	cout<<"Veuillez saisir votre nom: " << "\n"<<"\t";
	//le getline sert a afficher un string (l'utilisation du cin est interdite pour une chaine de caractere)
	getline(cin,nom);
	cout<<"Veuillez saisir votre prénom: " << "\n"<<"\t";
	getline (cin,prenom);
	cout<<"Veuillez saisir votre age: " << "\n"<<"\t";
	//l'age etant un int on laisse le cin.
	cin>> age;

}

//affichage les informations de la personne
void Personne::affiche()
{
	cout<<"\n\n\t"<<"Mr,Mme "<<nom <<" "<< prenom <<"\n age: "<< age <<"\n\n";
}