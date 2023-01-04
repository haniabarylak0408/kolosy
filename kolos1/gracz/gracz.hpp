#include <iostream>

using namespace std;

class Gracz{

private:
    string nick;
    int liczba_banow, experience;

public:
    Gracz();
    ~Gracz();

    string getNick();
    int getLiczba_banow();
    int getExperience();

    void setNick(string);
    void setLiczba_banow(int);
    void setExperience(int);

    virtual void Walka(){};



};

class PGracz :public Gracz{

public:
    void Walka();

};
