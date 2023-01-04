#include <iostream>
using namespace std;

class Auto{

private:
    string Model, Marka;
    int Moc, Rocznik, Kod_koloru;

public:
    Auto();
    ~Auto();
    string getModel();
    string getMarka();
    int getMoc();
    int getRocznik();
    int getKod_koloru();

    void setModel(string);
    void setMarka(string);
    void setMoc(int);
    void setRocznik(int);
    void setKod_koloru(int);

    virtual void SprawdzPrzebieg(){};

};

class PAuto :public Auto{

public:
    void SprawdzPrzebieg();

};
