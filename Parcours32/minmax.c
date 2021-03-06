#include<stdio.h>

int minmax(int *vect, int lg,  int *min, int *max);

int main()
{
    int vect[3];
    int min;
    int max;

    printf("Entrer 3 valeurs \n");
    scanf("%d %d %d", &vect[0], &vect[1], &vect[2]);
    int l, lg = 3;

    minmax(vect, lg, &min, &max);
    printf("Minimum: %d \n", min);
    printf("Maximum :  %d \n", max);
    return 0;
}

int minmax(int vect[], int lg, int *min, int *max)
{ 
    int l;
    *min = vect[0];
    *max = vect[0];
    int j;

    for(j = 1 ; j < lg ; j++ )
    {
        if (vect[j] < *min)
        {
            *min = vect[j];
        }

        if (vect[j] > *max)
        {
            *max = vect[j];
        }
    }
    return 0;
}
