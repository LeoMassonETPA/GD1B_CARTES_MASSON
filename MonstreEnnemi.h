#include <iostream>
#include <string>


class MonstreEnnemi{

    private:

        char _nomEnnemi;
        int _attaqueEnnemi;
        int _pdVEnnemi;
        bool _epuiseEnnemi;
        bool _mortEnnemi;

    public:

        void AtqMonstreEnnemi();
        void MortMonstreEnnemi();
        void AfficheInfoEnnemi();

        MonstreEnnemi(char nomEnnemi, int attaqueEnnemi, int pdVEnnemi);
};