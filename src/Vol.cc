#include "../includes/Vol.h"
#include <iostream>
using namespace std;

Vol::Vol(int numero_vol, string a_depart, string a_arrivee, heure depart,
         heure arrivee, Avion avion, list<Passager> liste_passagers)
    : m_numero_vol(numero_vol),
      m_aeroport_depart(a_depart),
      m_aeroport_arrivee(a_arrivee),
      m_depart(depart),
      m_arrivee(arrivee),
      m_avion(avion),
      m_l_pas(liste_passagers) {}

int Vol::get_num_vol(){
    return m_numero_vol;
}

string Vol::get_a_arrivee(){
    return m_aeroport_arrivee;
}

string Vol::get_a_depart(){
    return m_aeroport_depart;
}

heure Vol::get_heure_dep(){
    return m_depart;
}

heure Vol::get_heure_arr(){
    return m_arrivee;
}

int Vol::get_num_avion(){
    return m_avion.get_num_avion();
}

void Vol::set_list_pas(string nom, string prenom, int age){
    int num_place;
    cout << "Choisissez un numero de place";
    cin >> num_place;
    m_l_pas.push_back(Passager(nom, prenom, age, m_numero_vol, m_aeroport_depart, m_aeroport_arrivee, num_place));
}