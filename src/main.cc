#include "main.h"

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int choix(0);
    heure h1 = {.heure = 10, .minutes = 15, .secondes = 0};
    heure h2 = {.heure = 18, .minutes = 10, .secondes = 0};
    char continuer('o');
    list<Passager> l_pas;
    list<Vol> l_vol;
    list<Pilote> l_pil;
    Avion avion(1, 200);
    Passager pas1("Sow", "Boubacar", 20, 1, "Conakry", "Paris", 1);
    Passager pas2("Camara", "Mohamed", 20, 1, "Conakry", "Paris", 2);
    Pilote pil1("Doumbouya", "Mamadi");
    l_pil.push_back(pil1);
    l_pas.push_back(pas1);
    l_pas.push_back(pas2);
    Vol vol1(1, "AST", "Paris CDG", h1, h2, avion, l_pas);
    l_vol.push_back(vol1);
    Gestionnaire gestionnaire(l_pas, l_vol, l_pil);
    do {
        cout << " ================================================================="
             << endl;
        cout << "|       Bonjour et bienvenue dans l'applicaiton E-Aeroport        |" << endl;
        cout << " ================================================================="
             << endl;
        cout << "|           Selectionnez une option dans le menu suivant.         |"<< endl;
        cout << "|           1. Reservez un vol                                    |"<< endl;
        cout << "|           2. Consultez son vol                                  |" << endl;
        cout << "|           3. Voir tous les vols                                 |" << endl;
        cout << "|         4. Voir la liste des passagers pour un vol (code requis)|"
             << endl;
        cout << "|        5. |Administration|: Creer un vol (code requis)          |" << endl;
        cout << "|        6. |Administration|: Supprimer un vol (code requis)      |" << endl;
        cout << " __________________________________________________________________" << endl;
        do {
            cin >> choix;
        } while (choix > 4 && choix < 1);

        if (choix == 1) {
            gestionnaire.reserver();
        } else if (choix == 2) {
            gestionnaire.consulter();
        } else if (choix == 3) {
            gestionnaire.voir_tous_les_vols();
        } else {
            gestionnaire.voir_passagers();
        }
        cout << "Voulez-vous continuer o/n>";
        cin >> continuer;
        if (continuer == 'n') break;
    } while (true);
    cout << "Merci et a bientot" << endl;
    return 0;
}