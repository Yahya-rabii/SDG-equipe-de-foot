#include "equipe.h"
#include <iostream>
#include <assert.h>

using namespace std;

equipe::equipe() : joueur()
{

     this->nom_e= "NULL";
     this->date_de_creation="0/0/0";
     this->pays="null";
     this->taille = 0;
     this->tab = new joueur [22];




}

equipe::equipe(string nm, string pm, int ag, int num, int nm_mtch, int num_bt, string vll, string nom, string date_de_creation, string pays , int taille):joueur( nm,  pm,  ag,  num,  nm_mtch,  num_bt,  vll)
{

    this->nom_e = nom;
    this->date_de_creation = date_de_creation;
    this->pays = pays;
    this->taille = taille;
    this->tab = new joueur[22];

    

}

equipe::equipe(const equipe& e)
{


    this->nom_e = e.nom_e;
    this->date_de_creation =e.date_de_creation ;
    this->pays = e.pays;
    this->taille = e.taille;
    this->tab = new joueur[22];

    for (int i = 0; i < e.taille; i++)
    {


        this->tab[i] = e.tab[i];

    }


}

int equipe::nbr_bt() const
{
    
    int sm = 0;

    for (int i = 0; i < this->taille; i++)
    {

        sm = sm + this->tab[i].nbr_b();

    }


    return sm;
}

void equipe::remplissage()
{
    cout << "donne le nom de l'equipe " ;
    cin >> this->nom_e;
    cout << endl;


    cout << "donne la date de creation de l'equipe ";
    cin >> this->date_de_creation;
    cout << endl;

    cout << "donne le pays de l'equipe ";
    cin >> this->pays;
    cout << endl;

    cout << "donne le nombre de joueur dans l'equipe ";
    cin >> this->taille;
    cout << endl;
   
    assert(this->taille >= 0 && this->taille <= 22);

    for (int i = 0; i < taille; i++)
    {

        cout << "joueur " << i + 1 << ": " << endl;
        this->tab[i].remplissage();
        cout << endl;

    }

}

void equipe::affichage() const
{

    cout << " le nom de l'equipe :" << this->nom_e << endl;
    cout << " la date de creation de l'equipe :" << this->date_de_creation << endl;
    cout << " le pays de l'equipe :" << this->pays << endl;
    cout << " le nombre de joueurs dans l'equipe :" << this->taille << endl;
    

    assert(this->taille >= 0 && this->taille <= 22);

    for (int i = 0; i < taille; i++)
    {

        cout << "joueur " << i + 1 << ": " << endl;
        this->tab[i].affichage();
        cout << endl;

    }

}

equipe equipe::operator=(const equipe& e)
{
    

    if (this != &e) {


        delete[] this->tab;
        this->tab = nullptr;


        this->nom_e = e.nom_e;
        this->date_de_creation = e.date_de_creation;
        this->pays = e.pays;
        this->taille = e.taille;
        this->tab = new joueur[22];

        for (int i = 0; i < this->taille; i++)
        {


            this->tab[i] = e.tab[i];

        }


    }


    return*this;
}

joueur equipe::operator[](string nm)
{
    joueur j;

    for (int i = 0; i < this->taille; i++)
    {

        if (this->tab[i].find_by_name(nm)) {

            j = this->tab[i];


        }


    }

    return j;

}

bool equipe::operator<(const equipe& e)
{
    if (this->nbr_bt() < e.nbr_bt()) {

        return true;
    }

    else {

        return false;
    }

}

joueur equipe::get_meill_jr()
{

    int max = this->tab[0].nbr_b();
    joueur j;

    for (int i = 0; i < this->taille; i++)
    {

        if (this->tab[i].nbr_b() > max )
        {

            max = this->tab[i].nbr_b();
            j = this->tab[i];

        }


    }

    return j;
}

void equipe::change_jr(int num, joueur j)
{
    
    for (int i = 0; i < this->taille; i++)
    {

        if (this->tab[i].find_by_num(num)) {

            this->tab[i] = j;

    }

    }

}

void equipe::suppr_jr(string nom)
{

    int nbj=0;
   

    for (int i = 0; i < this->taille; i++)
    {

        if (this->tab[i].find_by_name(nom)) {

            nbj++;

        }


    }

    int ti = this->taille - nbj;
    joueur *tb = new joueur [22];
    int l = 0;
    

       for (int i = 0; i < this->taille; i++)
       {

           if (! this->tab[i].find_by_name(nom)) {

            
               tb[l] = this->tab[i];
               l++;
           }



       }

    delete[] this->tab;
    this->tab = nullptr;
   
    this->tab = new joueur[22];
    this->taille = ti;
    
    for (int i = 0; i < this->taille; i++)
    {

        this->tab[i] = tb[i];

    }



}

void equipe::ajouter_jr(joueur j)
{

    if (this->taille < 22) {

      
        this->tab[taille] = j;
        this->taille++;

    }


}

equipe::~equipe()
{

    delete[] this->tab;
    this->tab = nullptr;


}
