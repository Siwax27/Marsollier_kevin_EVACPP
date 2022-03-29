#ifndef LAC_CPP
#define LAC_CPP
#include "lac.h"
#include "Lieu.cpp"

Lac:: Lac(): Lieux(){
    _name = "lac";
    _description = "un grand lac un peu difficile a traverser avec les monstres aquatique qui y rode";
    _difficulter = 10;
}
#endif