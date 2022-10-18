#include <stdio.h>

char conversion(int num);

int main()
{
    FILE *fichier; // fichier est un pointeur
    int a,larg,haut,max;
    char str[2]; // pour lire la première ligne : P2
    fichier=fopen("Parcours42\\dogo.pgm","r"); // ouvrir dogo en lecture
    fscanf(fichier,"%s",str); // lire la première ligne 
    fscanf(fichier,"%d %d",&larg, &haut); // lire la deuxième ligne avec largeur et hauteur
    fscanf(fichier,"%d",&max);// lire l'échelle de gris
    FILE *sortie; // sortie est un pointeur 
    sortie=fopen("Parcours42\\image.txt","w"); // ouvrir le fichier de sortie en écriture
    char vect[larg]; //vecteur qui prend les caractères d'une ligne

    int i, j;
    for (i=0;i<haut;i++) //pour créer la première jusqu'à la dernière ligne
    {
        for (j=0;j<larg;j++) //pour créer chaque ligne
        {
            int num;
            fscanf(fichier,"%d",&num);
            vect[j]=conversion(num);
        }
        fprintf(sortie,"%s\n",vect);
    }
    fclose(fichier);
    fclose(sortie);
}

char conversion(int num)
{
    char output;
    if (num>=0 && num<=22)
    {
        output='@';
    }
    else if (num>=23 && num<=45)
    {
        output='8';
    }
    else if (num>=46 && num<=68)
    {
        output='O';
    }
    else if (num>=69 && num<=91)
    {
        output='C';
    }
    else if (num>=92 && num<=114)
    {
        output='o';
    }
    else if (num>=115 && num<=137)
    {
        output='c';
    }
    else if (num>=138 && num<=160)
    {
        output='=';
    }
    else if (num>=161 && num<=183)
    {
        output='-';
    }
    else if (num>=184 && num<=206)
    {
        output=':';
    }
    else if (num>=207 && num<=229)
    {
        output='.';
    }
    else if (num>=230 && num<=255)
    {
        output=' ';
    }
    return output;
}