#include "AgentCommercial.h"

AgentCommercial::AgentCommercial(string n, string p, int age, int nbrH, double taux,double comm, int nbr_vente)
:commissionFixee(comm),nbrTotalVente(nbr_vente),Employe(n,p,age,nbrH,taux)
{
    cout << " Ctor avec params AgentCommercial" << endl;
}

AgentCommercial::~AgentCommercial()
{
    cout << " Dtor AgentCommercial" << endl;
}

//---------> Masquage
void AgentCommercial::afficher() const
{
    //pour faire appel à la mthode affiche de classe de base
    this->Employe::afficher();
    cout << "Indemnite: " << this->calculerIndemnite() << endl;
    cout << "nbrTotalVente: " << this->nbrTotalVente << endl;
    cout << "-----------------------------------" << endl;
}


double AgentCommercial::calculerIndemnite() const
{
    return (this->commissionFixee*this->nbrTotalVente);
}


void AgentCommercial::calculerSalaireBase()
{
    //on calcule son salaire en etant un employe ordinaire
     //mais on ne va faire cela que si salaire!=0
    if (this->salaire == 0)
    {
        Employe::calculerSalaireBase();
    }
    //puis on ajoute indemnité
    this->salaire += this->calculerIndemnite();
}

