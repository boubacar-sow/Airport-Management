#ifndef Avion_H_
#define Avion_H_
#include <iostream>
#include <list>

using namespace std;

class Avion {
   private:
    int m_num_avion;
    int m_nb_places;

   public:
    Avion(int, int);
    int get_num_avion();
};

#endif