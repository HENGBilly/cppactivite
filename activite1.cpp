#include <iostream>
using namespace std;

int main() {
    int i ;
    string a = "yes";
    while (a == "yes"){
        for (i = 0 ; i < 100 ; i = i + 1)
        {
            cout<<"iteration "<< i ;
        }
        cout << "voulez relancer la boucle ? (yes/no)";
        cin >> a;

        if (a =="no"){
            cout << "voici la fin d'itération";
            return 0;
        }
    }
    cout<<"valeur de i apres la boucle "<< i <<endl ;
    return 0 ;
}
