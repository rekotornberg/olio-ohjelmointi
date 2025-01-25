#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef() {
    cout << "Cheff defaultkonsturtkori, ei nimea" << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, nimi "
         << chefName
         << endl;
}

Chef::~Chef()
{
    cout << "Chef desturktori" << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    int annoksia = aines / 5;
    cout << "Aineksia "
         << aines
         << endl;
    return annoksia;

}

int Chef::makeSoup(int aines)
{
    int keitto_annoksia = aines / 3;

    cout << "Aineksia "
         << aines
         << endl;
    return keitto_annoksia;
}


