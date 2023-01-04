#include "klasy.hpp"
#include <iostream>


Auto::Auto(){

cout << "Dodano nowe auto " <<endl;
}

Auto::~Auto(){

cout << "Auto " << this -> Model << " - " << this -> Marka << " usuniete" <<endl;
}


string Auto::getModel(){
return this -> Model;
}

string Auto::getMarka(){
return this -> Marka;
}

int Auto::getRocznik(){
return this -> Rocznik;
}

int Auto::getKod_koloru(){
return this -> Kod_koloru;
}

void Auto::setModel(string Mo){
this -> Model = Mo;
}

void Auto::setMarka(string Ma){
this -> Marka = Ma;
}

void Auto::setRocznik(int R){
this -> Rocznik = R;
}

void Auto::setKod_koloru(int K){
this -> Kod_koloru = K;
}

