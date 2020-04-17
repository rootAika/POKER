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

bool is_same_figure(carte*carte1, carte*carte2);

bool is_same_figure(carte*carte1, carte*carte2);
/*************************************Choix figures et valeurs******************************/
char generatevalue() {
    sleep(1);
    int nb1= rand() %13;

    return valeurs[nb1];
}

char generatefigure() {
    sleep(1);
    int nb2 = rand() %4;

    return figures[nb2];
}


/*********************************Génération carte***************************************/
mainjoueur generatehand() {

    for (int i = 0; i <=4; i++) { //Génération d'une carte

        carte carte ;
        carte.figure=generatefigure();
        carte.valeur=generatevalue();
        printf("%c%c\n", carte.figure,carte.valeur);

    }


    mainjoueur result;
    return result;


}

/************************************bool**************************/

bool is_same_figure(carte*carte1, carte*carte2)
{

    return carte1->figure == carte2->figure;            //retourne true ou false après avoir comparé les figues des cartes

}

bool is_same_value (carte * carte1, carte * carte2)
{

    return carte1->valeur == carte2->valeur;            //retourne true ou false après avoir comparé les valeurs des cartes

}





int main() {
    srand(time(NULL)); //commande random
    printf("%c\n", generatehand());
    generatefigure();
    generatevalue();
    printf("Test");
    return 0;
}