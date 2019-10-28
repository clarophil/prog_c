#include<stdio.h>

int swap(int *a,int *b);

int main() {
    int a = 10;
    int b = 20;

    printf("Valeur de a ? \n");
    scanf("%d",&a);
    printf("Valeur de b ? \n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Swap %d %d\n",a,b);
    return 0;
}

int swap(int *a, int *b)
{
   int c;
   c =  *a ;
   *a = *b;
   *b = c;
   return 0;
}