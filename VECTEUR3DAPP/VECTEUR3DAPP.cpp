// VECTEUR3DAPP.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Vecteur3D.h"
using namespace std;
int main()
{
    Vecteur3D V1;
    Vecteur3D V2(2.1, 3.4, 5.8);
    Vecteur3D V3 = V1;
    V1.print();
    V2.print();
    V3.print();
    Vecteur3D V4 =V1.operator+(V2);
    V4.print();
    float a = V4 * V2;
    cout << a << endl;
    Vecteur3D VP;
    VP.produit_vect(V2);
    VP.print();



  
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
