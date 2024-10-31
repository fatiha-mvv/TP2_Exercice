#pragma once
#include "Employe.h"
class Entreprise
{
private:
	string nom;
	string adresse;
	static int effectif; //nombre actuel des Employ�s
	int capacityMax; //capacit� maximum des employ�s
	//tableau des employ�s
	Employe** Employes;
public:
	Entreprise(string,string,int);
	double calculerTotalSalaire()const;
	void redimentionnerTableau();
	bool ajouterEmploye(Employe* emp);
	void afficherInfosEmployes()const;
	~Entreprise();
};

