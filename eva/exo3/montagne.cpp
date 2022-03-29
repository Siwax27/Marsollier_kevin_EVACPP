#ifndef MONTAGNE_CPP
#define MONTAGNE_CPP
#include "montagne.h"
#include "Lieu.cpp"

Montagne:: Montagne(): Lieux(){
    _name = "Montagne";
    _description = "des montagne rocheuse difficile a parcourir avec les pente et le risque déboulement";
    _difficulter = 5;
}
#endif