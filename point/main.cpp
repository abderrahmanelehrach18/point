#include <iostream>
#include "point.h" 
using namespace std;

int main()
{
	int index = 1;
	float x1, y1, x2, y2;

	cout << "Entrer la coordonnee x1: " << endl;
	cin >> x1;
	cout << "Entrer la coordonnee y1: " << endl;
	cin >> y1;
	cout << "Entrer la coordonnee x2: " << endl;
	cin >> x2;
	cout << "Entrer la coordonnee y2: " << endl;
	cin >> y2;

	Point pt1(x1, y1);
	Point pt2(x2, y2);

	pt1.afficher(index++);
	pt2.afficher(index);

	cout << "La distance entre les deux points est: " << pt1.calculerDistance(pt2) << endl;

	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
