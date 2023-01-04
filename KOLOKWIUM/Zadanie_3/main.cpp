#include <iostream>
#include "Klasa4.hpp"


using namespace std;

int main()
{
    Klasa1 *tablica[4] = {new Klasa1, new Klasa2, new Klasa3, new Klasa4};

    Klasa1 *wsk;
    for(int i=0; i<4; i++){
        wsk = tablica[i];
        wsk -> Sprawdzam();

    return 0;
}
}
