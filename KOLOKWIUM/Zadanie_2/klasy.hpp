#include <iostream>
using namespace std;

class Klasa1{

public:
    int x;
    Klasa1(int x);
};

class Klasa2{

public:
    int x;
    Klasa2(int x);
};


Klasa1 operator+(const Klasa1& c1, const Klasa2& c2);
