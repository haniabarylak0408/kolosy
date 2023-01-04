#include "klasy.hpp"
#include <iostream>

Klasa1::Klasa1(int x) : x(x) {}

Klasa2::Klasa2(int x) : x(x) {}


Klasa1 operator+(const Klasa1& c1, const Klasa2& c2)
{
   return Klasa1(c1.x + c2.x);
}
