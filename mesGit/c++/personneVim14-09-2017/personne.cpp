//appel du fichier de la classe Contact
#include "personne.h"

//definition du constructeur
// Contact::Contact()
// {
// 	nom="bob";
// 	age=	95;
// 	prenom="leponge";
// }

// Contact::Contact(string ceNom,string cePrenom,int cetAge)
// {
// 	nom=ceNom;
// 	prenom=cePrenom;
// 	age=cetAge;
// }
//fin des constructeurs	

//nom
string Contact::getNom()
{
	return nom;
}
void Contact::setNom(string leNom)
{
	nom=leNom;	
}

//prenom
string Contact::getPrenom()
{
	return prenom;
}
void Contact::setPrenom(string lePrenom)
{
	prenom=lePrenom;
}

//age
int Contact::getAge()
{
	return age;
}
void Contact::setAge(int monAge)
{	
	age=monAge;
}


//saisie du nom de la personne
void Contact::saisir()
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
void Contact::affiche()
{
	cout<<"\n\n\t"<<"Mr,Mme "<<nom <<" "<< prenom <<"\n age: "<< age <<"\n\n";
}
