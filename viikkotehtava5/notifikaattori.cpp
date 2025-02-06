#include "notifikaattori.h"
#include "seuraaja.h"


Notifikaattori::Notifikaattori()
{
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja *addSeuraaja)
{
    addSeuraaja->next = nullptr;
    if (!seuraajat) {
        seuraajat = addSeuraaja;
        return;
    }

    Seuraaja* i = seuraajat;
    while (i->next) {
        i = i->next;
    }

    i->next = addSeuraaja;
}


void Notifikaattori::poista(Seuraaja *delSeuraaja)
{
    if (seuraajat == delSeuraaja) {
        seuraajat = seuraajat->next;
        return;
    }

    Seuraaja* i = seuraajat;
    while (i->next && i->next != delSeuraaja) {
        i = i->next;
    }

    if (i->next == delSeuraaja) {
        i->next = delSeuraaja->next;
    }
}


void Notifikaattori::tulosta()
{
    Seuraaja* i = seuraajat;

    while (i) {
        cout << i->getNimi() << endl;
        i = i->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja* i = seuraajat;

    while (i) {
        i->paivitys(viesti);
        i = i->next;
    }
}
