#include <iostream>
#include <string>

class Monstre{

    private:

        char _nom;
        int _attaque;
        int _pdV;
        bool _epuise;
        bool _mort;

    public:

        void AtqMonstre();
        void MortMonstre();
        void AfficheInfo();

        Monstre(char nom, int attaque, int pdV);
};