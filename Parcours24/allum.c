#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int ordi(int reste);

int main()
{
    setlocale(LC_ALL, "");
    int nbJoueur=0, nbOrdi;
    srand(time(NULL)); // initialisation de rand
    int nbAllumette = rand() % 20;
    printf("Nombre d'allumettes %d \n",nbAllumette);
    while (nbAllumette >= 1)
    {
        while (nbJoueur <=0  || nbJoueur >3  || nbJoueur > nbAllumette )
        {
            printf("Entrer un nombre d'allumettes : \n");
            scanf(" %d",&nbJoueur);
        }
        nbAllumette = nbAllumette - nbJoueur;
        nbJoueur = 0;
        if (nbAllumette == 0) {
            printf("Ordi a gagné ! \n");
        }
        else {
            nbOrdi = ordi(nbAllumette);
            printf("Ordinateur enlève %d allumettes \n",nbOrdi);
            nbAllumette = nbAllumette - nbOrdi;

            if (nbAllumette == 0)
            {
                printf("Joueur a gagné !\n");
            }
            else {
                printf("Reste %d allumettes \n", nbAllumette);
            }
        }
    }
    return 0;
}
int ordi(int nbAllumette)
{
    int reste = 0;
    reste = nbAllumette % 4;
    if (reste == 0)
    {
        reste = 1;
    }
    if (reste < 4 && reste != 1 ) {
        reste = reste - 1;
    }
    return reste;
}
