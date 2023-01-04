#include <iostream>
#include "KlasaB.hpp"

using namespace std;


class KlasaC :public KlasaB{

private:
    string info1 = "Taco";
    int info2 = 2115;
    float info3 = 420.0;

public:

    void Testuj();
    friend ostream& operator<<(ostream&, KlasaC&);

};
