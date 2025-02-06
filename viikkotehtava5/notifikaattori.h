#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <iostream>
#include <string>
#include "seuraaja.h"

using namespace std;

class Notifikaattori
{
public:
    Notifikaattori();
    void lisaa(Seuraaja* addSeuraaja);
    void poista(Seuraaja* delSeuraaja);
    void postita(string viesti);
    void tulosta();

private:
    Seuraaja* seuraajat = nullptr;

};

#endif // NOTIFIKAATTORI_H
