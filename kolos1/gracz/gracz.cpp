#include <iostream>
#include "gracz.hpp"


Gracz::Gracz(){

cout << "Dodano nowego gracza." <<endl;
this -> nick = "nick";
this -> liczba_banow = 0;
this -> experience = 0;

}

Gracz::~Gracz(){

cout << "Konto gracza " << this -> nick << " zostalo usuniete. " <<endl;

}


string Gracz::getNick(){

return this -> nick;
}

int Gracz::getLiczba_banow(){

return this -> liczba_banow;
}

int Gracz::getExperience(){

return this -> experience;
}

void Gracz::setNick(string n){

this->nick=n;
}

void Gracz::setLiczba_banow(int l){

this->liczba_banow=l;
}

void Gracz::setExperience(int e){

this->experience=e;
}


void PGracz::Walka(){

cout << "Walcze!" <<endl;
}
