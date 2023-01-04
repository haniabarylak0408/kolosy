#include <iostream>
#include "klasy.hpp"

using namespace std;

int main(){

    Klasa1 c1(10);
    Klasa2 c2(20);
    Klasa1 c3 = c1 + c2;
    cout << c3.x <<endl;

    return 0;
}

