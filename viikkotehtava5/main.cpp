#include "notifikaattori.h"
#include "seuraaja.h"
#include <iostream>

using namespace std;

int main() {
    Notifikaattori n;

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");
    Seuraaja d("D");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);
    n.lisaa(&d);
    n.tulosta();

    n.postita("Viesti 1");

    n.poista(&a);

    n.tulosta();

    n.postita("Viesti 2");

    return 0;
}
