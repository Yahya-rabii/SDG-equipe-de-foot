#include "joueur.h"
#include <iostream>

using namespace std;

joueur::joueur()
{


	this->age = 0;
	this->nom = "null";
	this->prenom = "null";
	this->ville = "null";
	this->numero = 0;
	this->numero_but = 0;
	this->numero_mtch = 0;


}

joueur::joueur(string nm, string pm, int ag, int num, int nm_mtch, int num_bt, string vll)
{

	this->age = ag;
	this->nom = nm;
	this->prenom = pm;
	this->numero = num;
	this->numero_but = num_bt;
	this->numero_mtch = nm_mtch;
	this->ville = vll;

}

joueur::joueur(const joueur& j)
{	
	
	this->numero_but = j.numero_but;
	this->numero_mtch = j.numero_mtch;
	this->age = j.age;
	this->nom = j.nom;
	this->prenom = j.prenom;
	this->numero = j.numero;
	this->numero_mtch = j.numero_mtch;
	this->ville = j.ville;

}

joueur joueur::operator++(int)
{
	
	joueur temp(*this);
	temp.numero_but = this->numero_but++;
	return temp;

}

joueur& joueur::operator++()
{
	 ++this->numero_but;
	return *this;

}

void joueur::operator-(int i)
{
	this->age = this->age - i;
}

bool joueur::find_by_name(string nm) const
{
	if (this->nom == nm)
	{

		return true;

	}

	else {
		return false;
	}

}

bool joueur::find_by_num(int num) const
{
	if (this->numero == num)
	{

		return true;

	}

	else {
		return false;
	}

}

int joueur::nbr_b() const
{
	return this->numero_but;
}

void joueur::affichage() const
{


	cout << "le nom : " << this->nom << endl;
	cout << "le prenom : " << this->prenom <<endl;
	cout << "la ville : " << this->ville<<endl;
	cout << "l'age : " << this->age <<endl;
	cout << "le numero : " << this->numero <<endl;
	cout << "le numero de but : " << this->numero_but <<endl;
	cout << "le numero de match : " << this->numero_mtch <<endl;


}

void joueur::remplissage()
{

	cout << "donne un nom : " ;
	cin >> this->nom;
	cout << endl;

	cout << "donne un prenom : ";
	cin >> this->prenom;
	cout << endl;

	cout << "donne un ville : ";
	cin >> this->ville;
	cout << endl;

	cout << "donne un age : ";
	cin >> this->age;
	cout << endl;


	cout << "donne un numero : ";
	cin >> this->numero;
	cout << endl;


	cout << "donne un nombre but : ";
	cin >> this->numero_but;
	cout << endl;

	cout << "donne un nombre match  : ";
	cin >> this->numero_mtch;
	cout << endl;

}

joueur::~joueur()
{
}