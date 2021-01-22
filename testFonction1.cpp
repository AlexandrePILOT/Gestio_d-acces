/***************************

*****************************/
#include <iostream>	// bibliothèque de gestion des E/S
#include <conio.h>	// gestion de la console (ici _getch())

void fonction1()
{
	cout <<"Fonction"<< endl;
}


using namespace std;

/*****************************
Fonction principale
*****************************/
int main()	// Fonction principale
{
	
	cout <<"Hello World"<< endl;


	_getch();	// attente d'appui sur une touche
	return 0;	// fin du programme. Le code 0 est envoyé
}