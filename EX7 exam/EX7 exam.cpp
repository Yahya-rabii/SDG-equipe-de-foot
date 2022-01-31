
#include <iostream>
#include "joueur.h"
#include"equipe.h"

int main()
{


    /*
    joueur j1;

    j1.remplissage();

    j1.affichage();

    cout << endl;

    joueur j2;

    j2 = j1++;

    j2.affichage();


    cout << endl;


    j2 = ++j1;
    j2.affichage();
    
    */

    

    equipe e1;
    e1.remplissage();

//    e1.affichage();

    joueur j1;
    j1 = e1["yahya"];
    j1.affichage();

  /* 
    
    equipe e2;
    e2.remplissage();
    
    if (e1 < e2)
    {
        cout << "oui " << endl;

    }
    else
    {

        cout << "non " << endl;

    }
   */

   //joueur j2;
   //j2 = e1.get_meill_jr();
  
   //j2.affichage();


    //e1.suppr_jr("YAHYA");
    //e1.affichage();


    //joueur j3;
    //j3.remplissage();
    //e1.change_jr(1, j3);
    //e1.affichage();


    //joueur j4;
    //j4.remplissage();
    //e1.ajouter_jr(j4);
    //e1.affichage();

}
