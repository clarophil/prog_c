#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void swap(int*a,int*b);
void tri(int v[], int l);

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    const int lg = 4;
    int valeurs[lg];
    int i;
    for(i = 0 ; i < lg ; i++)
    {
       valeurs[i]= rand() % 50;
       printf("Le terme num�ro %d de la serie de donn�es est: %d \n", i+1 , *(valeurs+i));
    }
    tri(valeurs,lg);
    int f;
    for(f = 0 ; f < lg ; f++)
    {
       printf("Le terme num�ro %d de la serie de donnees tri�e est: %d \n", f+1, *(valeurs+f));
    }
}

void swap2(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void tri(int v[],int l)
{
    int k;
    int p;
    for(k = 0; k < l; k++)
    {
        for (p = k ;p < l ; p++)
        {
            if( *(v+p) < *(v+k) )
            {
                swap2( &(*(v+k)) , &(*(v+p)) );
            }
        }
    }
}
