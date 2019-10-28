#include<stdio.h>
#include<string.h>

int main()
{
    int a,i;
    printf("Encoder une limite de la boucle : \n");
    scanf("%d",&a);
    printf("Boucle de 0 à %d\n",a);
    for(i = 0 ; i <= a ; i++)
    {
        printf("%d\n",i);
    }
}

