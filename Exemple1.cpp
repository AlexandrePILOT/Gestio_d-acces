/***************************

*****************************/
#include <iostream>	// bibliothèque de gestion des E/S
#include <conio.h>	// gestion de la console (ici _getch())
#include <Windows.h> // pour activer les accents avec la commande dans le main

using namespace std;

//=============== les prototypes ===============

//==============================================



/*****************************
	Fonction principale
*****************************/



/*****************************
Fonction principale
*****************************/
int main()	// Fonction principale
{

	cout << "Bonjour tout le monde" << endl;

	SetConsoleOutputCP(1252); // pour les accents


	_getch();	// attente d'appui sur une touche
	return 0;	// fin du programme. Le code 0 est envoyé
}