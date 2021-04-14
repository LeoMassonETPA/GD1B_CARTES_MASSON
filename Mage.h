#include <iostream>
#include <string>

class Mage{

    private:

        char _nom;
        int _pdV;
        int _zoneDeJeu;
        int _mana


    public:

        void DebutTour();
        void InvocMonstre();
        void AtqMonstreInvo();
        void AtqInvocateur();
        void AfficheInfoMage();

        Mage(char nom, int pdV, int zoneDeJeu);
};