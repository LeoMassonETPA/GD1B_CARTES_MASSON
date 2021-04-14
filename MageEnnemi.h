#include <iostream>
#include <string>

class MageEnnemi{

    private:

        char _nomEnnemi;
        int _pdVEnnemi;
        int _zoneDeJeuEnnemi;
        int _manaEnnemi;


    public:

        void DebutTourENnemi();
        void InvocMonstreEnnemi();
        void AtqMonstreInvoEnnemi();
        void AtqInvocateurEnnemi();
        void AfficheInfoMageEnnemi();

        MageEnnemi(char nomEnnemi, int pdVEnnemi, int zoneDeJeuEnnemi);
};