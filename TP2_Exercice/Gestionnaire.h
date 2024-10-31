#pragma once
#include "Employe.h"
class Gestionnaire :virtual public Employe
{
private:
	double salaireHebdomadaire;
public:
	Gestionnaire(string, string, int, int, double,double salHeb);
	~Gestionnaire();
	void afficher()const override;
	void calculerSalaireBase() override;
};

