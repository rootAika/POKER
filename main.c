#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>


/********************************* valeurs***************************************/
char values []={'A', 'K', 'Q', 'J', 'T', '9', '8', '7', '6', '5', '4', '3', '2'};
char figures[]={'C', 'D', 'H', 'S'}; //C=Trèfle H=Coeur D=Carreau S=Pique


/*********************************structure*********************************/
typedef struct carte {
    char valeur;
    char figure;
}carte;

typedef struct main
{
    carte cartes[5];
}mainjoueur;

/*******************************prototypes**********************************/
mainjoueur generatehand();
void affichermain(mainjoueur);
char generatefigure();

/********************************choix figures et valeurs*******************/





char generatevalue();

char generatefigure() {
    srand(time(NULL)); //initialisation du nb aléatoire
    int nb2 = rand() %4;
    printf("%c", figures[nb2]);
    return figures[nb2];
}

/******************************************Génération carte********************************/

mainjoueur generatehand() {

    for (int i=0; i<=5; i++) { //Generation d'une carte
        carte carte;
        carte.figure = generatefigure();
        carte.valeur = generatevalue();
    }
    mainjoueur result;
    return result;
}


int main() {
    generatefigure();
    generatehand();
    return 0;
}
