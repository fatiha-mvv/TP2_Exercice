#include <iostream>
#include "Employe.h"
#include "Entreprise.h"
#include "AgentCommercial.h"
#include "Gestionnaire.h"
#include "GestionnaireCommercial.h"
#include <iostream>

using namespace std;

int main()
{

	// creation des objets employes
	Employe* emp1 = new Employe("Emp1","Emp1",40,240,15);
	Employe* emp2 = new Employe("Emp2", "Emp2", 29, 190, 12);
	Employe* emp3 = new AgentCommercial("Emp3", "Emp3", 25, 240, 15,6,130);
	Employe* emp4 = new Gestionnaire("Emp4", "Emp4", 35, 243, 20,500);
	Employe* emp5 = new GestionnaireCommercial("Emp5", "Emp5",20
		, 243, 20, 500,10,210);


	// creation d'entreprise
	Entreprise entreprise("nom_entreprise","@adresse_entreprise",60);

	// ajout des employes a l'entreprise
	entreprise.ajouterEmploye(emp1); //employe oridinaire
	entreprise.ajouterEmploye(emp2);//employe oridinaire
	entreprise.ajouterEmploye(emp3);// AGENT COMMECIAL
	entreprise.ajouterEmploye(emp4);// Gestionnaire
	entreprise.ajouterEmploye(emp5);// GestionnaireCommercial

	// let's break down the example above of emp5
	/*
	salaire en tant que employe ===> 20*243 = 4860
	salaire en tant que gestionnaire ===> + 500*4= 2000 
	salaire en tant que AgentCommercial ===> + 210*10= 2100
	Total en tant que GestionnaireCommercial = 4860+2000+2100 = 8960 
	*/

	//affichage des employes
	entreprise.afficherInfosEmployes();

	//affichage de total des salaire
	cout << "-------------- Total des Salaires --------------" << endl;
	cout << "Total = " << entreprise.calculerTotalSalaire() << endl;
	cout << endl;
	// liberation de memoire
	delete emp1, emp2,emp3,emp4,emp5;
}


