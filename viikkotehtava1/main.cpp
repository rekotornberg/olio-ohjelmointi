#include <iostream>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int maxnum = 40;
    int arvaukset = game(maxnum);
    cout <<"Arvausten lukumaara: " << arvaukset << endl;
    return 0;
}

int game(int maxnum){
    int num = 0;
    int satNum = 0;
    int arvaukset = 1;

    srand(time(NULL));
    satNum = rand() % maxnum;

    while (true){
        cout << "Arvaa numero 1-" << maxnum << endl;
        cin >> num;
        if (satNum == num) {
            cout << "Oikein!" << endl;
            break;
        } else if (satNum < num) {
            cout << "Arvottu numero on pienempi kuin " << num << endl;
            arvaukset += 1;

        } else if (satNum > num) {
            cout << "Arvottu numero on suurempi kuin " << num << endl;
            arvaukset += 1;
        }
    }
    return arvaukset;
}


