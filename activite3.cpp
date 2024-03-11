#include <iostream>
using namespace std;

int main() {
    int nbrSecret = 42;

    int tentative = 0;
    int nombre;

    while (tentative < 10) {
        cout << "Entrez votre proposition : ";
        cin >> nombre;

        if (nombre < nbrSecret) {
            cout << "Plus grand !" << endl;
            cout << "Il vous reste " << 9 - tentative << " tentatives." << endl;
        } else if (nombre > nbrSecret) {
            cout << "Plus petit !" << endl;
            cout << "Il vous reste " << 9 - tentative << " tentatives." << endl;
        } else {
            cout << "Gagné !" << endl;
            break;
        }

        tentative++;
    }

    if (tentative == 10) {
        cout << "Vous avez épuisé toutes vos tentatives. Le nombre secret était : " << nbrSecret << endl;
    }
}
