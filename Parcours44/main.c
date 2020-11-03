#include<stdio.h>
#include<string.h>

char convert (int pix);

int main()
{
    char *filename = "Parcours44//dogo.pgm";

    FILE *fichier;
    fichier = fopen(filename , "r");

    if( fichier == NULL )
    {
        fprintf(stderr,"Unable to read file '%s'\n",filename);
        return(1);
    }

    char tt [5];
    //fscanf(fichier,"%s",tt);

   char lect[100];

   do
   {
      fgets (lect,100,fichier);
   }
   while (lect[0]=='#');
   sscanf (lect, "%s", tt);

   printf("%s",tt) ;
   
    int x;
    int y;
    //fscanf(fichier,"%d",&x);
    do
   {
      fgets (lect,100,fichier);
   }
   while (lect[0]=='#');
   sscanf (lect, "%d %d", &x,&y);



    printf ("%d",x);
    printf ("%d",y);

    int echelle;
    fscanf(fichier,"%d",&echelle);
    printf ("%d", echelle);

    int lvect = x*y;
    int vect[lvect];
    int i;
    for (i=0;i<=lvect;i++)
    {
        int val;
        //fscanf(fichier,"%d",&val)  ;
        do
           {
              fgets (lect,100,fichier);
           }
        while (lect[0]=='#');

        sscanf (lect, "%d", &val);
        vect[i]=val;
    }

    char vecttxt [lvect];
    int j;
    int pix;
    for (j=0;j<lvect;j++)
    {
        pix = convert (vect[j]);
        vecttxt[j] = pix;
        int k = j%x;

        if (k ==0)
        {
            vecttxt[j] = '\n';
        }
    }


    FILE *chien;
    chien = fopen ("Parcours44//chientext.txt", "w");
    fprintf(chien,vecttxt);



    fclose(fichier);
    fclose(chien);
}


char convert (int pix)
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



