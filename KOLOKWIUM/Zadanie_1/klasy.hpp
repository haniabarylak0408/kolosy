#include <iostream>
using namespace std;

class Klasa {
private:
    int _prywatne;

public:
    Klasa(int prywatne);
    friend void przyjaciel(Klasa* klasa);
};
