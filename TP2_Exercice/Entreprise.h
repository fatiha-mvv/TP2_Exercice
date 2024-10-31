#pragma once
#include "Employe.h"
class Entreprise
{
private:
	string nom;
	string adresse;
	static int effectif; //nombre actuel des Employés
	int capacityMax; //capacité maximum des employés
	//tableau des employés
	Employe** Employes;
public:
	Entreprise(string,string,int);
	double calculerTotalSalaire()const;
	void redimentionnerTableau();
	bool ajouterEmploye(Employe* emp);
	void afficherInfosEmployes()const;
	~Entreprise();
};

