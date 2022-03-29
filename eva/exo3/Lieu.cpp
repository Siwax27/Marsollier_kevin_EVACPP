#ifndef LIEU_cpp
#define LIEU_cpp

#include "Lieu.h"

    Lieux:: Lieux() : _name("sansnom"), _description("voici une description"), _difficulter(0){}
    Lieux:: Lieux(string nom, string description, int difficulty) : _name(nom),_description(description),_difficulter(difficulty){};
    
    string Lieux:: getNom(){
        return _name;
    }
    string Lieux:: getDescription(){
        return _description;
    };

    int Lieux:: getDifficulty(){
        return _difficulter;
    };
    void Lieux:: changeNom(string nouveauNom){_name = nouveauNom;}
            



#endif