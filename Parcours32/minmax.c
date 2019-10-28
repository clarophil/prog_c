#include<stdio.h>

int *fct_minmax(int *vect, int lg);

int main()
{
    int vect[3];
    int *minmax;
    //vect[]={5,10,15};
    printf("Entrer 3 valeurs \n");
    scanf("%d %d %d", &vect[0], &vect[1], &vect[2]);
    int l, lg = 3;

    for(l = 0 ; l < lg ; l++){
        printf("Vecteur valeur %d : %d \n", l+1, vect[l]);
    }

    minmax = fct_minmax(vect, lg);
    printf("Minimum: %d \n", minmax[0]);
    printf("Maximum :  %d \n", minmax[1]);
    return 0;
}

int *fct_minmax(int *vect, int lg)
{ 
    static int minmax[2];
    int min = vect[0];
    int max = vect[0];
    int j;

    for(j = 1 ; j < lg ; j++ )
    {
        if (vect[j] < min)
        {
            min = vect[j];
        }

        if (vect[j] > max)
        {
            max = vect[j];
        }
    }
    minmax[0] = min;
    minmax[1] = max;
    return minmax;
}
