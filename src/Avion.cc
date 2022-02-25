#include "../includes/Avion.h"

#include <iostream>
using namespace std;

Avion::Avion(int num_avion, int nb_places)
    : m_num_avion(num_avion), m_nb_places(nb_places) {}

int Avion::get_num_avion(){
    return m_num_avion;
}
