#pragma once
#include <iostream>
#include "Salarie.h"
using namespace std;

class Employe: public Salarie
{
private:
	string nom;
	string prenom;
	int age;
	int nbrHeuresTravail;
	double tauxHoraire;
protected:	double salaire;
public:
	Employe(string, string, int, int,double,double sal=0);
	~Employe();
	virtual void afficher()const;
	virtual void calculerSalaireBase();
	double calculerSalaire()override;
};

