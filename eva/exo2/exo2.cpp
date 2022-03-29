#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    
    string choix;
    cout<<"choissisez une destination : montagne / lac"<<endl;
    cin >> choix;

    if(choix == "montagne"){
        cout<<"vous partez pour la montagne"<<endl;
    }
    if(choix == "lac"){
        cout<<"vous partez pour le lac"<<endl;
    }
    return 0;
}