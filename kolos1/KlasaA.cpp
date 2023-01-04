#include <iostream>
#include "KlasaA.hpp"

void KlasaA::Testuj(){

cout << "Witam w klasie A!" <<endl;
}

int KlasaA::getLiczba(){

return this -> liczba;
}

void KlasaA::setLiczba(int arg){

this -> liczba = arg;
}
