#include "Gestionnaire.h"
#include <iostream>
using namespace std;


Gestionnaire::Gestionnaire(string n, string p, int a, int nbrH, double taux, double salaireH)
    :salaireHebdomadaire(salaireH),Employe(n,p,a,nbrH,taux)
{
    cout << " Ctor avec params Gestionnaire" << endl;
}


//-----> fonction de'affichage
void Gestionnaire::afficher() const
{
    this->Employe::afficher();
    cout << " Salaire hebdomadaire: " << this->salaireHebdomadaire << endl;
}


//-----> fonction de calcul de salaire
void Gestionnaire::calculerSalaireBase()
{
    //on calcule son salaire en etant un employe ordinaire
    //mais on ne va faire cela que si salaire!=0
    if (this->salaire == 0)
    {
        Employe::calculerSalaireBase();
    }
    //puis on ajoute le montant de salaire hebdomadaire
    this->salaire += this->salaireHebdomadaire * 4;
}


//------> Destructeur
Gestionnaire::~Gestionnaire()
{
    cout << " Dtor Gestionnaire" << endl;
}