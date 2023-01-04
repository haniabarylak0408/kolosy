#include <iostream>
#include "KlasaB.hpp"

void KlasaB::Testuj(){

cout << "Witam w klasie B!" <<endl;
}

KlasaB::KlasaB(){};

KlasaB::KlasaB(int arg){

this -> setLiczba(arg);
}
