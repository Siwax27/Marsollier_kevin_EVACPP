#ifndef LIEU_H
#define LIEU_H

#include <string>
#include <vector>
using namespace std;

class Lieux{
    protected:
        string _name;
        string _description;
        int _difficulter;
    public:
        Lieux();
        Lieux(string nom, string description, int difficulty);
        string getNom();
        string getDescription();
        int getDifficulty();
        void changeNom(string nouveauNom);
};






#endif