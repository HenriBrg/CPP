/* TEST 2 TAGS : TEMPLATE avec FONCTEUR - FONCTEUR PAR DEFAUT */


# include <iostream>
# include <functional>
using namespace std;

// Fonction template prenant en paramètre deux valeurs
// et un foncteur :
template <class T, class F>
T applique(T i, T j, F foncteur)
{
    // Applique l'opérateur fonctionnel au foncteur
    // avec comme arguments les deux premiers paramètres :
    return foncteur(i, j);
}

int main(void)
{
    // Construit le foncteur de somme :
    plus<int> foncteur_plus;
    // Utilise ce foncteur pour faire faire une addition
    // à la fonction "applique" :
    cout << applique(2, 3, foncteur_plus) << endl;
    return 0;
}

/* Il y a plusieurs foncteurs de base déjà définis dans le header <fonctional> */
/* http://casteyde.christian.free.fr/cpp/cours/online/x5268.html */
