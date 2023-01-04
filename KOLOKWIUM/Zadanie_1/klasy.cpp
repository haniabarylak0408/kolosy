#include "klasy.hpp"
#include <iostream>

Klasa::Klasa(int prywatne) : _prywatne(prywatne) {}

void przyjaciel(Klasa* klasa) {

    int prywatne = klasa->_prywatne;
    cout << "Wartosc zmiennej prywatnej: " << prywatne <<endl;
}




