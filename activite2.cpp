#include <iostream>
using namespace std;

int main() {
    int nbr = 0;
    for (int i = 101 ; i > 0 ; i = i - 1)
    {
        cout<<" "<< i-1 <<" ";
    }
    cout << "Veuillez choisir un nombre :";
    cin >> nbr;
    cout << "Voici la descendance :";
    cout << " " << nbr;
    for(nbr; nbr > 0 ;nbr = nbr -1){
        cout << " " << nbr-1 << " ";
    }
}
