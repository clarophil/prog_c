#include<stdio.h>

int minmax(int *vect, int lg,  int *min, int *max);

int main()
{
    int vect[3]={5,10,15};;
    int *minadr, minval;
    int *maxadr, maxval;
    minadr = &minval;
    maxadr = &maxval;
    int l, lg = 3;

    minmax(vect, lg, minadr, maxadr);
    printf("Minimum: %d %d\n", *minadr, minval);
    printf("Maximum :  %d %d\n", *maxadr, maxval);
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
