#include "Employe.h"
#include <iostream>
using namespace std;

Employe::Employe(string n, string p, int a,int nbr, double taux,double sal)
    :nom(n),prenom(p),age(a),
    nbrHeuresTravail(nbr),tauxHoraire(taux),salaire(sal)
{
    cout << " Ctor avec params Employe" << endl;
}

Employe::~Employe()
{
    cout << " Dtor Employe" << endl;
}

void Employe::afficher() const
{
    cout << " ----------- Affichage ------------- " << endl;
    cout << "nom: " <<this->nom <<endl;
    cout << "prenom: " << this->prenom << endl;
    cout << "salaire : " << this->salaire << endl;
    cout << " ---------------------------------- " << endl;
}


//NB:  j'ai ajouté this->salaire+=
//  parceque cela va me servir dans le calcul de salaire
//  de GestionnaireCommercial
void Employe::calculerSalaireBase()
{   
    this->salaire+=(this->nbrHeuresTravail*this->tauxHoraire);
}



double Employe::calculerSalaire()
{
    //dans ce cas on va juste faire appel au fonction
    //calculer salaire de base
    this->calculerSalaireBase();
    cout << " + " << this->salaire << endl;
    return this->salaire;
}
