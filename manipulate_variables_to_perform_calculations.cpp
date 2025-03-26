
#include <iostream>
using namespace std;

int main()
{
    cout << "Quel age avez-vous ?" << endl;

    int ageUtilisateur(0); //On prépare une case mémoire pour stocker un entier

    cin >> ageUtilisateur; //On fait entrer un nombre dans cette case

    cout << "Vous avez " << ageUtilisateur << " ans !" <<  endl; //Et on l'affiche

    return 0;
}