#include <iostream>
#include <string>
#include "Monstre.h"
#include "MonstreEnnemi.h"


void Monstre::AtqMonstre(){
    _pdV = _pdV - _attaqueEnnemi;
    _pdVEnnemi = _pdVEnnemi - _attaque;
}

void Monstre::MortMonstre(){
    if (int _pdV <= 0){bool _mort = true};
}

void Monstre::AfficheInfo(){
    std::cout << "Le monstre", _nom, "possède", _pdV, "points de vie et ", _attaque, "points d'attaque" << std::endl;
}

