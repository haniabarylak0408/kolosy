#include <iostream>
#include "klasy.hpp"
using namespace std;

int main()
{
    Klasa obj;
    try
    {
        cout << obj.podziel(10, 2) << endl;
        cout << obj.podziel(10, 0) << endl;
    }
    catch (const invalid_argument& e)
    {
        cerr << "Wyjatek zlapany: " << e.what() << endl;
    }
    return 0;
}
