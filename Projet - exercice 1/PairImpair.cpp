/* 
But : Le programme doit me d�clarer si un nombre est pair ou impair correctement
Auteur: Amine Kelouche
Date: 2020-09-13
*/

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");				// Permet de lire les accents dans la console

	int nb1;							// D�clarer qu'il y aura une variable.

	// le programme demande � l'utilisateur d'entrer un entier.

	std::cout << "Veuillez entrer un nombre entier : ";

	std::cin >> nb1;					// Pour permettre au programme de lire le nombre entier.
	if (nb1 % 2 == 0)					// La console divise la variable par 2 et ensuite v�rifie si le restant est �gal a 0 pour savoir s'il est pair.
	{
		std::cout << nb1 << " Est un nombre pair ";
	}
	else                                // Si le restant n'est pas �gal � 0 le num�ro est impair.
	{
		std::cout << nb1 << " est un nombre impair";
	}


}

/*
Plan de test:
��������������
nb1				resultat
10				pair
25				impair	
20				pair
57				impair
49				impair
48				pair
50				pair
*/
