/*
But: Faire un programme qui prend un nombre de cinq chiffre et affiche chaque chiffre en vertical
Auteur: Amine Kelouche
Date: 2020-09-13
*/

#include <iostream>	   // permet d'utiliser les p�riph�rique d'entr�e et de sortie.
#include <string>      // permet d'utilisier la librairie string.
int main()				// D�but du programme
{
	int grosnmb;     // d�clare la variable grosnmb
	std::cout << "Veuillez entrer un nombre � cinq chiffre: ";     // demande � l'utilisateur d'entrer un nombre a 5 chiffre
	std::cin >> grosnmb;


	if (grosnmb < 10000 || grosnmb > 99999)      // si la variable grosnmb est plus petit OU ( || ) plus grand que 99999 
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}
	else													/* si le nombre est de 5 chiffre, il va convertir la variable en string, donc en lettres.
															 gr�ce a std:string str = std::to_string()
															 */
	{
		std::string str = std::to_string(grosnmb);
		for (char x : str)									// ici la fonction for() va prendre chaque character, donc lettre singulier du string grosnmb et les imprimer
		{													// avec l'aide de endl; chaque lettres vont se faire imprimer sur une nouvelle ligne et c'est
			std::cout << x << std::endl;					// de cette fa�on qu'on peut voir les chiffres se faire imprimer � la verticale :D 
		}
		
	}
	return 0;
}
/*
tests
10000 : fonctionne
12345 : fonctionne
999999: ne contient pas 5 chiffres
9999  : ne contient pas 5 chiffres
92742 : fonctionne
*/

