#include "klasy.hpp"
#include <iostream>
#include <stdexcept>

Klasa::Klasa() {}

int Klasa::podziel(int x, int y)
{
    if (y == 0)
    {
        throw invalid_argument("Nie mozna dzielic przez 0!");
    }
    return x / y;
}
