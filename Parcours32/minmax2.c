#include<stdio.h>

int minmax(int *vect, int lg,  int *min, int *max);

int main()
{
    int vect[3]={5,10,15};;
    int *min, minval;
    int *max, maxval;
    min = &minval;
    max = &maxval;
    int l, lg = 3;

    minmax(vect, lg, min, max);
    printf("Minimum: %d \n", *min);
    printf("Maximum :  %d \n", *max);
    return 0;
}

int minmax(int vect[], int lg, int *min, int *max)
{ 
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
