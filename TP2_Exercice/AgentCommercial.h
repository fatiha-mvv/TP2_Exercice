#pragma once
#include "Employe.h"


class AgentCommercial:virtual public Employe
{
private:
	double commissionFixee;
	int nbrTotalVente;
public:
	AgentCommercial(string, string, int,int,double,double,int);
	~AgentCommercial();
	void afficher()const override;
	double calculerIndemnite()const;
	void calculerSalaireBase() override;
};

