#include "Passager.h"

#include <iostream>
using namespace std;

Passager::Passager(string nom, string prenom, int age, int num_vol, string lieu_depart,
                   string lieu_arrivee, int num_place)
    : m_nom(nom),
      m_prenom(prenom),
      m_age(age),
      m_num_vol(num_vol),
      m_lieu_depart(lieu_depart),
      m_lieu_arrivee(lieu_arrivee),
      m_num_place(num_place) {}


string Passager::get_nom(){
    return m_nom;
}

string Passager::get_prenom(){
    return m_prenom;
}

int Passager::get_age(){
    return m_age;
}

int Passager::get_num_vol(){
    return m_num_vol;
}

string Passager::get_lieu_depart(){
    return m_lieu_depart;
}

string Passager::get_lieu_arrivee(){
    return m_lieu_arrivee;
}

int Passager::get_num_place(){
    return m_num_place;
}

void Passager::display_passager() {
    cout << "Nom: " << m_nom << endl;
    cout << "Prenom: " << m_prenom << endl;
    cout << "Age: " << m_age << endl;
    cout << "Lieu de départ: " << m_lieu_depart << endl;
    cout << "Lieu d'arrivée: " << m_lieu_arrivee << endl;
    cout << "Numero de place: " << m_num_place << endl;
}