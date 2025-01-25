#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef c_olio("Mikko");

    int annoksia = c_olio.makeSalad(19);
    cout << "Salaatti annoksia tehtiin " << annoksia << endl;

    int keitto_annoksia = c_olio.makeSoup(3);
    cout << "Keitto annoksia tehtiin " << keitto_annoksia << endl;


    ItalianChef i_olio("Ismo laitela");

    bool salasana = i_olio.askSecret("pizza", 15, 15);

    return 0;
}
