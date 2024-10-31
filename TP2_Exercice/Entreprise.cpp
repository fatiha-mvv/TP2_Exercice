#include "Entreprise.h"
int Entreprise::effectif = 0;
Entreprise::Entreprise(string n, string adr,int max)
	:nom(n),adresse(adr),capacityMax(max)
{
	this->Employes = new Employe*[capacityMax];
	//initialisation de tableau des pointeurs à null
	for (int i = 0;i < this->capacityMax;i++)
	{
		this->Employes[i] = nullptr;
	}
	cout << " Ctor Entreprise" << endl;
}


//------> Fonction pour calculer total des salaires
double Entreprise::calculerTotalSalaire() const
{
	double total = 0;
	for (int i = 0;i < Entreprise::effectif;i++)
	{
		total += this->Employes[i]->calculerSalaire();
	}
	return total;
}


//-------> fonction de redimentionnement de tableau
void Entreprise::redimentionnerTableau()
{
	this->capacityMax *= 2;
	//creation d'un nouveau tableau
	Employe** nouv = new Employe*[capacityMax];
	//initialisation de tous les ptrs à null
	for (int i = 0;i < this->capacityMax;i++)
	{
		nouv[i] = nullptr;
	}
	// Copie des pointeurs existants dans le nouveau tableau
	for (int i = 0;i < this->capacityMax / 2;i++)
	{
		nouv[i] = this->Employes[i];
	}
	//libération de tableau ancien
	delete[] this->Employes;
	this->Employes = nullptr;
	//affecterle nouveau tableau
	this->Employes = nouv;
}



//------> methode pour ajouter un nouveau employe
bool Entreprise::ajouterEmploye(Employe* emp)
{
	if (this->effectif < this->capacityMax)
	{
		this->Employes[Entreprise::effectif++] = emp;
		//une fois employe ajoute on doit calculer son salaire de base
		//ici on appliquer un polymorphique at run time
		//la methode a appeler est determine selon type d'objet cree
		//soit (gestionnaire,AgentCommercial)
		emp->calculerSalaireBase();
		return true;
	}
	cout << " capacity maximale est atteinte !!!  " << endl;
	return false;
}



//------> Fonction d'affichage de tous les employes
void Entreprise::afficherInfosEmployes() const
{
	for (int i = 0;i < this->effectif;i++)
	{
		this->Employes[i]->afficher();
	}
}

//------> Destructeur
Entreprise::~Entreprise()
{
	//s'agit d'une aggregation 
	//je vais supprimer uniquement le tableau employés alloué dynamiquement
	delete[] this->Employes;
	//initialiser à nullptr
	this->Employes = nullptr;
	cout << " Dtor Entreprise" << endl;
}


