#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cout<< "saisir un entier: ";
	cin >> x;
	cout<< "saisir un entier: ";
	cin>> y;

	int *plusPetit;
	int *plusGrand; 

	if(x <y)
	{
		plusPetit=&x;//on le fait pointer vers x
		plusGrand=&y;//on le fait pointer vers y

	}
	else 
	{
		plusPetit=&y; // on le fait pointer vers x
		plusGrand=&x; // on le fait pointer vers y
	}

cout<<"les voici par ordre croissants: " << *plusPetit <<"puis"<< *plusGrand<<endl;
}