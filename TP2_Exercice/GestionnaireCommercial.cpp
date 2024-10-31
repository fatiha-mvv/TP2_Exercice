#include "GestionnaireCommercial.h"



GestionnaireCommercial::GestionnaireCommercial
(string n, string p, int a, int nbrH, double taux, double salHeb,
	double commF, int nbrToralV)
	:Gestionnaire(n,p,a,nbrH,taux,salHeb),
	AgentCommercial(n,p,a,nbrH,taux,commF,nbrToralV),
	Employe(n, p, a, nbrH, taux)
{
	cout << " Ctor GestionnaireCommercial" << endl;
}

void GestionnaireCommercial::afficher() const
{
	Gestionnaire::afficher();
	AgentCommercial::afficher();
}

void GestionnaireCommercial::calculerSalaireBase()
{
	Gestionnaire::calculerSalaireBase();
	AgentCommercial::calculerSalaireBase();
}
