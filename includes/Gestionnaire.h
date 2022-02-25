#ifndef GESTIONNAIRE_H_
#define GESTIONNAIRE_H_
#include <iostream>
#include <list>
#include "Pilote.h"
#include "Vol.h"
using namespace std;
class Gestionnaire{


    private:
        list<Passager> m_l_passager;
        list<Vol> m_l_vol;
        list<Pilote> m_l_pilote;

    public:
        Gestionnaire(list<Passager>&, list<Vol>&, list<Pilote>&);
        void reserver();
        void consulter();
        void voir_tous_les_vols();
        void voir_passagers();
        void initialiser();
};


#endif