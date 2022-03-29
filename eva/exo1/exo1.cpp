#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int choix;
    cout<<"choissisez une destination : 1=montagne / 2=lac \n"<<endl;
    cin >> choix;

    if(choix == 1){
        cout<<"vous partez pour la montagne"<<endl;
    }
    if(choix == 2){
        cout<<"vous partez pour le lac"<<endl;
    }
    return 0;
}