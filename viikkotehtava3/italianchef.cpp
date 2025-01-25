#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef()
{
    cout << "ItalianChef defaultkonstruktori, ei nimea" << endl;
}

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef konstruktori"
        << ", kokin nimi "
        << name
         << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef desruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int waterAmount, int flourAmount)
{
    if (pw == password) {
        cout << "Salasana oikein!!!" << endl;
        water = waterAmount;
        flour = flourAmount;
        makePizza();
        return true;
    } else {
        cout << "Vaara Salasana!" << endl;
        return false;
    }
}


int ItalianChef::makePizza() {
    int tarvittava_vesi = 5;
    int tarvittava_jauho = 5;

    int vesi = water / tarvittava_vesi;
    int jauho = flour / tarvittava_jauho;

    int pitsat = min(vesi, jauho);
    cout << "Voit tehda " << pitsat << " pizzaa." << endl;

    return pitsat;
}

