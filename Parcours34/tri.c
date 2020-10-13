#include <stdlib.h>
#include <time.h>

void swap(int*a,int*b);
void tri(int v[], int l);

int main()
{
    srand(time(NULL));
    int valeurs[10];
    int i;
    for(i = 0 ; i < 10 ; i++)
    {
       valeurs[i]= rand() % 50;
       printf("Le terme numéro %d de la serie de données est: %d \n", i+1 , *(valeurs+i));
    }
    tri(valeurs,10);
    int f;
    for(f = 0 ; f < 10 ; f++)
    {
       printf("Le terme numéro %d de la serie de donnees inversée est: %d \n", f+1, *(valeurs+f));
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
            if(*(v+p)<*(v+k))
            {
                swap2(&(*(v+k)),&(*(v+p)));
            }
        }
    }
}
