#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
/****************************Valeurs**************************/

char valeurs[]={'A','K','Q','J','T','9','8','7','6','5','4','3','2'};
char figures[]={'C','D','H','S'}; //C=Trèfle H=Coeur D=Carreau  S=Pique
/******************************Structures*********************************/
typedef struct carte
{
    char valeur;
    char figure;
}carte;

typedef struct main
{
    carte cartes[5];
}mainjoueur;
/*********************************Prototypes*********************************/
mainjoueur generatehand();
void affichermain(mainjoueur);
char generatefigure();

char generatevalue ();

/*************************************Choix figures et valeurs******************************/
char generatevalue() {
    srand(time(NULL)); //initialisation du nb aléatoire
    sleep(1);
    int nb1= rand() %13;

    return valeurs[nb1];
}

char generatefigure() {
        srand(time(NULL));
        sleep(1);
        int nb2 = rand() %4;

    return figures[nb2];
}

/*********************************Génération carte***************************************/


int main() {
generatevalue();
    return 0;
}