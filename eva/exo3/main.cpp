#include "lac.cpp"
#include "foret.cpp"
#include "montagne.cpp"
#include <iostream>
#include <string>
#include "Lieu.cpp"
using namespace std;

int main(){
    Lieux * lieuxChoisis;

    string choix;
    cout << "ou voulez vous allez ? montagne/ lac / foret"<<endl;
    cin >> choix;
    
    if(choix == "foret")
        lieuxChoisis = new Foret();
        
        cout << "vous êtes arriver a : "<< lieuxChoisis << "ou voulez vous allez après ? montagne ou lac"<<endl;
    if (choix == "montagne")
        lieuxChoisis = new Montagne();
        cout << "vous êtes arriver a : "<< lieuxChoisis << "ou voulez vous allez après ? lac ou foret"<<endl;         

    if(choix == "lac")
        lieuxChoisis = new Lac();
        cout << "vous êtes arriver a : "<< lieuxChoisis << "ou voulez vous allez après ? montagne ou foret"<<endl;

    string voyage;
    cin>> voyage;
    if(voyage == "foret")
        lieuxChoisis = new Foret();
    if (voyage == "montagne")
        lieuxChoisis = new Montagne();
    if(voyage == "lac")
        lieuxChoisis = new Lac();

};