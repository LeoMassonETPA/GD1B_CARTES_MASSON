#include <iostream>
#include <string>
#include "Monstre.h"



void Monstre::AtqMonstre(){

}

void Monstre::MortMonstre(){
    if (int _pdV <= 0){bool _mort = true};
}

void Monstre::AfficheInfo(){
    std::cout << "Le monstre", _nom, "possède", _pdV, "points de vie et ", _attaque, "points d'attaque" << std::endl;
}

