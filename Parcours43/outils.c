#include <stdio.h>
#include "outils.h"

char convertochar (int pix);

int dog()
{
    char *filename = "dogo.pgm";

    FILE *fichier;
    fichier = fopen(filename , "r");

    if( fichier == NULL )
    {
        fprintf(stderr,"Unable to read file '%s'\n",filename);
        return(1);
    }
    
    char *filename2 = "image.txt";

    FILE *fichier2;
    fichier2 = fopen(filename2 , "w+");

    if( fichier2 == NULL )
    {
        fprintf(stderr,"Unable to write file '%s'\n",filename2);
        return(1);
    }
    
    char debut[3];
    fscanf(fichier, "%s", debut);
    int larg;
    fscanf(fichier, "%d", &larg);
    int haut;
    fscanf(fichier, "%d", &haut);
    int echelle;
    fscanf(fichier, "%d", &echelle);
    printf("%d %d \n",larg,haut);

    int i=0,j=0,k = 0;
    int caract;
    int taille = (larg * haut)+ haut + 1;
    char sortie[taille];
    for (i=0 ; i < haut ; i++)
    {
        for (j=0 ; j < larg ; j++)
        {
            fscanf(fichier,"%d", &caract) ;
            sortie[k] = convertochar(caract);
            k++;
        }
        sortie[k] = '\n';
        k++;
    }
    sortie[k] = '\0';
    fprintf(fichier2, "%s", sortie);

    fclose(fichier);
    fclose(fichier2);

    return 0;
}

char convertochar (int pix)
{
    //pix = //pointer sur le vecteur
    char txt = ' ';

    if ((pix>=0)&&(pix<=22))
    {
        txt = '@';
    }

    if ((pix>=23)&&(pix<=45))
    {
        txt = '8';
    }

    if ((pix>=46)&&(pix<=68))
        {
            txt = 'O';
        }

    if ((pix>=69)&&(pix<=91))
        {
            txt = 'C';
        }
    if ((pix>=92)&&(pix<=114))
        {
            txt = 'o';
        }

    if ((pix>=115)&&(pix<=137))
        {
            txt = 'c';
        }

    if ((pix>=138)&&(pix<=160))
        {
            txt = '=';
        }

    if ((pix>=161)&&(pix<=183))
        {
            txt = '-';
        }

    if ((pix>=184)&&(pix<=206))
        {
            txt = ':';
        }

    if ((pix>=207)&&(pix<=229))
        {
            txt = '.';
        }

    if ((pix>=230)&&(pix<=255))
        {
            txt = ' ';
        }

    return txt;
}
