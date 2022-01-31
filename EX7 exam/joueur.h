#pragma once
#include <iostream>

using namespace std;

class joueur
{


private:

	string nom;
	string prenom;
	int age;
	int numero;
	int numero_mtch;
	int numero_but;
	string ville;


public:
	joueur();
	joueur( string nm ,string pm ,int ag,int num,int nm_mtch,int num_bt,string vll);
	joueur(const joueur& j);

	joueur operator++(int);
	joueur& operator++();
	void  operator-(int i);


	bool find_by_name(string nm) const;


	bool find_by_num (int num) const;


	int nbr_b()const;



	virtual void affichage()const;
	virtual void remplissage();
	~joueur();
};


