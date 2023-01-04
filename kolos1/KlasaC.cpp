#include <iostream>
#include "KlasaC.hpp"

void KlasaC::Testuj(){

cout << "Witam w klasie C!" <<endl;
}

ostream& operator <<(ostream &wyjscie, KlasaC &C){

wyjscie << C.info1 << " " << C.info2 << " " << C.info3 <<endl;
return wyjscie;

}

