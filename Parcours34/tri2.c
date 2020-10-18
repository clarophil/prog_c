#include <stdio.h>

void tri(int v[],int v2[]);

int main()
{
    int v[5]={4,32,1,16,3};
    int v2[5];

    // Appel de la fonction de tri
    tri(v,v2);

    // Affichage du résultat
    int i=0;
    for (i=0;i<5;i++)
    {
        printf("Vecteur trié %d ",v2[i]);  
    }
     return 0;
}

void tri(int v[],int v2[])
{
    int min, max = 0 ;
    int i, j;

    // Recherche du max dans le vecteur v
    for (i = 0 ; i < 5 ; i++)
    {
        if( v[i] > max ) 
        {
            max = v[i];
        }
    }
    printf("max %d\n",max);

    // Stockage du min dans v2
    for ( j = 0 ; j < 5 ; j++)
    {
        // Réinitialisation du min
        min = max;
        //Recherhche du min mais supérieur au min précédent
        for ( i = 0 ; i < 5 ; i++)
        {
            if (v[i] > v2[j-1] && v[i]  < min )
            {
                min=v[i];
            }
        }
        v2[j]=min;
        printf("%d\n",v2[j]);
    }
}