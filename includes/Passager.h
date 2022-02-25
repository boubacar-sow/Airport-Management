#ifndef PASSAGER_H_
#define PASSAGER_H
#include <iostream>
using namespace std;


class Passager{
    private:
        string m_nom;
        string m_prenom;
        int m_age;
        int m_num_vol;
        string m_lieu_depart;
        string m_lieu_arrivee;
        int m_num_place;
    
    public:
        Passager(string, string, int, int, string, string, int);
        void display_passager();
        string get_nom();
        string get_prenom();
        int get_age();
        int get_num_vol();
        string get_lieu_depart();
        string get_lieu_arrivee();
        int get_num_place();
};

#endif