#ifndef VOL_H_
#define VOL_H_
#include <iostream>
#include <list>
#include "Avion.h"
#include "Passager.h"
using namespace std;

typedef struct{
    int heure;
    int minutes;
    int secondes;
}heure;

class Vol{

    private:
        int m_numero_vol;
        string m_aeroport_depart;
        string m_aeroport_arrivee;
        heure m_depart;
        heure m_arrivee;
        Avion m_avion;
        list<Passager> m_l_pas;


    public:
        Vol(int, string, string, heure, heure, Avion, list <Passager>);
        int get_num_vol();
        string get_a_arrivee();
        string get_a_depart();
        heure get_heure_dep();
        heure get_heure_arr();
        int get_num_avion();
        void set_list_pas(string, string, int);
};

#endif