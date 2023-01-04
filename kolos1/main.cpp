#include <iostream>
#include <fstream>
#include "KlasaC.hpp"

using namespace std;


void Zapis(int t[]){

    string path;
    cout << "Wpisz sciezke do zapisu pliku: " <<endl;
    cin >> path;
    if (path.size()>8) throw 1;
    path += ".txt";


ofstream file(path);
if (file.is_open()){
    for (int i=0; i<750; i++)
        if(t[i]%2) file << t[i] <<endl;
    file.close();
    }

}

int main(){

//1

    KlasaA *tablica[3] = {new KlasaA, new KlasaB, new KlasaC};

    KlasaA *wsk;

    for (int i=0; i<3; i++){

        wsk = tablica[i];
        wsk -> Testuj();
    }

//2

    KlasaC C;
    cout << C <<endl;


//3

    KlasaB B(1234);
    cout << B.getLiczba() <<endl;


//4

int liczby[750];
for (int i=0; i<750; i++)
    liczby[i] = rand()%451;

try{

Zapis(liczby);
}
catch (int ERROR){

if(ERROR) cout << "Twoja nazwa jest zbyt dluga! " <<endl;
}




return 0;

}
