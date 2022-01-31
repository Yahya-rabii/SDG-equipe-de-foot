#pragma once
#include "joueur.h"


class equipe :public joueur
{

private:

	string nom_e;
	string date_de_creation;
	string pays;
	joueur* tab;
    
	int taille;

public:
	equipe();
	equipe(string nm, string pm, int ag, int num, int nm_mtch, int num_bt, string vll , string nom , string date_de_creation , string pays , int taille);
	equipe(const equipe &e);

	
	int nbr_bt()const;

    void remplissage() override;
	void affichage()const override;

	equipe operator = (const equipe& e);
	joueur operator[] (string nm);
	bool operator< (const equipe& e);
	joueur get_meill_jr();
    
	void change_jr(int num, joueur j);
	void suppr_jr(string nom);
	void ajouter_jr(joueur j);



	~equipe();

};
