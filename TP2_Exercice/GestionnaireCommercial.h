#pragma once
#include "Gestionnaire.h"
#include "AgentCommercial.h"

class GestionnaireCommercial:public Gestionnaire,
	public AgentCommercial
{
public:
	//contructeur
	GestionnaireCommercial(string, string, int, int, double, double salHeb,double commF,int nbrToralV);
	void afficher()const override;
	void calculerSalaireBase() override;
};

