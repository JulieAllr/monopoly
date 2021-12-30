#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Fonctions.h"
#include <time.h>

int main()
{
    int nbjoueurs=0, choix=0;
    joueur tableau[4]; //ce tableau est rempli dans le menu si on selectionne la nouvelle partie
    joueur tableauordre[4];
    t_propriete Plateau[32]; //déclaration du plateau

    //affichage du menu principal
    menu(tableau, Plateau, &nbjoueurs, &choix, tableauordre);
    //si le choix était d'afficher les joueurs ou les regles le menu se réaffiche juste après l'avoir quitté
    while (choix==4 || choix==5){
       menu(tableau, Plateau, &nbjoueurs, &choix, tableauordre);
    }

    if (choix ==1){
        gotoligcol(0,0); // remise à 0 du curseur

        remplissagetableau(Plateau); //initialisation et affichage du plateau
        InitilisationPlateau(Plateau);

        gotoligcol(0,0); //remise à 0 du curseur
        deplacement_pion(nbjoueurs, Plateau, tableauordre);
        affichagepropriete(Plateau);

        gotoligcol(50, 0); //affichage du process return en dehors du plateau
    }




    gotoligcol(50, 0); //affichage du process return en dehors du plateau
    return 0;
}
