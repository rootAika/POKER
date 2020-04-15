#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
/****************************Valeurs**************************/

char valeurs[]={'A','K','Q','J','T','9','8','7','6','5','4','3','2'};
char figure[]={'C','D','H','S'}; //C=Trèfle H=Coeur D=Carreau  S=Pique
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


char generatevalue() {
    srand(time(NULL)); //initialisation du nb aléatoire
    int nb1= rand() %13+1;

    carte.valeur=valeurs[nb1]; //prend une valeur au hasard

    printf("%d",nb1);
    return 0;
}

char generatefigure() {
        srand(time(NULL));
        sleep(1);
        int nb2 = rand() %4;
        carte.figure = figures[nb2];
    return 0;
}


int main() {
generatevalue();
    return 0;
}