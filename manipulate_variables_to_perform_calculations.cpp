/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Combien vaut pi ?" << endl;
    double piUtilisateur(-1.); //On crée une case mémoire pour stocker unnombre réel
    cin >> piUtilisateur; //Et on remplit cette case avec ce qu'écritl'utilisateur

    cin.ignore();

    cout << "Quel est votre nom ?" << endl;
    string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenir une chaine de caractères
    getline(cin, nomUtilisateur); //On remplit cette case avec toute la ligne que l'utilisateur a écrit
     
    cout << "Vous vous appelez " << nomUtilisateur << " et vous pensez que pi vaut " << piUtilisateur << "." << endl;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int a(4), b(5); //Déclaration de deux variables

    cout << "a vaut : " << a << " et b vaut : " << b << endl;

    cout << "Affectation !" << endl;
    a = b; //Affectation de la valeur de 'b' à 'a'.

    cout << "a vaut : " << a << " et b vaut : " << b << endl;

    return 0;
}
*/

#include <iostream>
using namespace std;

int main()  
{
  int resultat(0), a(5), b(8);

  int const nombreNiveaux(10);

  string const motDePasse("wAsTZsaswQ"); //Le mot de passe secret
  double const pi(3.14);
  unsigned int const pointsDeVieMaximum(100); //Le nombre maximal de points de vie

  resultat = a + b;

  cout << "5 + 8 = " << resultat << endl;

  return 0;
}