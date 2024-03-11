#include <iostream>
using namespace std;

int main() {
    int a;
    int i;
    cout << "veuillez entrer un nombre : ";
    cin >> a;
    i = a;
    if(a%2 ==0){
        cout << "voici les nombres pairs : ";
        for(i; i > 0;i= i-2){
            a= a-2;
            cout << " "<< a;
        }
    }else{
        cout<< "ce nombre est impaire :(";
        return 0;
    }

    int z;
    cout << "ici l'exo sera fait par une boucle while recommençons." << endl ;
    cout << "veuillez entrer un nombre : ";
    cin >> z;
    i = z;
    if (z%2 == 0){
    while(z > 0){
        z =z -2;
        cout << " "<< z;
        }
    }else{
        cout << "ce nombre n'est pas pair";
    }
    
}
