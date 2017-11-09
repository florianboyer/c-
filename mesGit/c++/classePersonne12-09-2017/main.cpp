//appel du fichier de la classe Personne
#include "personne.h"
int main()
{
	//appel de la classe Personne
	Personne moi;
	Personne lui("duval","antoine",54);
	moi.affiche();
	lui.affiche();
	
	return 0;	
}