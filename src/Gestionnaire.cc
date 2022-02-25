#include "includes/Gestionnaire.h"

#include <iostream>
#include <list>

using namespace std;

Gestionnaire::Gestionnaire(list<Passager>& l_pas, list<Vol>& l_vol,
                           list<Pilote>& l_pil) {
    for (list<Passager>::iterator it_pas = l_pas.begin(); it_pas != l_pas.end();
         ++it_pas) {
        m_l_passager.push_back(*it_pas);
    }
    for (list<Vol>::iterator it_vol = l_vol.begin(); it_vol != l_vol.end();
         ++it_vol) {
        m_l_vol.push_back(*it_vol);
    }
    for (list<Pilote>::iterator it_pil = l_pil.begin(); it_pil != l_pil.end();
         ++it_pil) {
        m_l_pilote.push_back(*it_pil);
    }
}

void Gestionnaire::voir_passagers() {
    int num_vol;
    cout << "Entrez le numero de vol" << endl;
    cin >> num_vol;
    cout << "************************************************************" << endl;
    cout << "             Affichage de la liste des passagers                  " << endl;
    for (list<Passager>::iterator it_pas = m_l_passager.begin();

         it_pas != m_l_passager.end(); ++it_pas) {
        if (it_pas->get_num_vol() == num_vol) {
            cout << "|             Nom: " << it_pas->get_nom() << endl;
            cout << "|             Prenom: " << it_pas->get_prenom() << endl;
            cout << "|             Lieu de depart: "
                 << it_pas->get_lieu_depart() << endl;
            cout << "|             Destination: " << it_pas->get_lieu_arrivee()
                 << endl;
            cout << "|             Numero de place: " << it_pas->get_num_place()
                 << endl;
        }
    }
    cout << "|________________________________________________________________|" << endl;


    cout << "Merci!!!" << endl;
}

void Gestionnaire::reserver() {
    int num_vol, age;
    string nom, prenom;
    cout << "Entrez le numero de vol pour reserver" << endl;
    cin >> num_vol;
    cout << "Entrez votre nom et prenom -Nom Prenom-" << endl;
    cin >> nom >> prenom;
    cout << "Entrez votre age" << endl;
    cin >> age;

    for (list<Vol>::iterator it_vol = m_l_vol.begin(); it_vol != m_l_vol.end();
         ++it_vol) {
        if (it_vol->get_num_vol() == num_vol) {
            it_vol->set_list_pas(nom, prenom, age);
        }
    }

    cout << "Reservation prise en compte, Merci et à bientot" << endl;
}

void Gestionnaire::voir_tous_les_vols() {
    cout
        << "  _________________________________________________________________"
        << endl;
    cout
        << "|             Affichage de la liste de tous les vols              |"
        << endl;
    cout
        << "  -----------------------------------------------------------------"
        << endl;

    for (list<Vol>::iterator it_vol = m_l_vol.begin(); it_vol != m_l_vol.end();
         ++it_vol) {
        cout << "|             Numero: " << it_vol->get_num_vol()
             << "           |" << endl;
        cout << "|             Aeroport de depart: " << it_vol->get_a_depart()
             << endl;
        cout << "|             Aeroport de d'arrivee: "
             << it_vol->get_a_arrivee() << endl;
        cout << "|             Heure depart: " << it_vol->get_heure_dep().heure
             << ":" << it_vol->get_heure_dep().minutes << ":"
             << it_vol->get_heure_dep().secondes << endl;
        cout << "|             Heure : " << it_vol->get_heure_arr().heure << ":"
             << it_vol->get_heure_arr().minutes << ":"
             << it_vol->get_heure_arr().secondes << endl;
        cout << "|         Affichage de la liste des passagers pour ce vol     "
                "    |"
             << endl;
        for (list<Passager>::iterator it_pas = m_l_passager.begin();
             it_pas != m_l_passager.end(); ++it_pas) {
            if (it_pas->get_num_vol() == it_vol->get_num_vol()) {
                cout << "|             Nom: " << it_pas->get_nom() << endl;
                cout << "|             Prenom: " << it_pas->get_prenom()
                     << endl;
                cout << "|             Lieu de depart: "
                     << it_pas->get_lieu_depart() << endl;
                cout << "|             Destination: "
                     << it_pas->get_lieu_arrivee() << endl;
                cout << "|             Numero de place: "
                     << it_pas->get_num_place() << endl;
            }
        }
        cout << "|_____________________________________________________________"
                "___|"
             << endl;
    }
    cout << "|________________________________________________________________|"
         << endl;

    cout << "Merci et à bientot!!" << endl;
}

void Gestionnaire::consulter() {
    int num_vol, count(0);
    cout << "Entrez votre numero de vol: ";
    cin >> num_vol;
    for (list<Vol>::iterator it_vol = m_l_vol.begin(); it_vol != m_l_vol.end();
         ++it_vol) {
        if (it_vol->get_num_vol() == num_vol) {
            count += 1;
            cout << it_vol->get_num_vol() << endl;
            cout << it_vol->get_a_arrivee() << endl;
            cout << it_vol->get_a_depart() << endl;
            cout << it_vol->get_heure_dep().heure << ":"
                 << it_vol->get_heure_dep().minutes << ":"
                 << it_vol->get_heure_dep().secondes << endl;
            cout << it_vol->get_heure_arr().heure << ":"
                 << it_vol->get_heure_arr().minutes << ":"
                 << it_vol->get_heure_arr().secondes << endl;
        }
        if (count == 0) {
            cout
                << "Erreur, ce numero de vol n'existe pas. Veillez réessayez!!!"
                << endl;
        }
    }
}