#include <iostream>
#include "gracz.hpp"

using namespace std;

int main()
{
    Gracz *g1 = new Gracz;
    g1->Walka();
    delete g1;

    PGracz *g2 = new PGracz;
    g2->Walka();
    delete g2;

    return 0;
}
