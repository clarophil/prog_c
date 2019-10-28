#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    printf("Encoder 2 entiers : \n");
    scanf("%d %d",&a,&b);
    if (a < b)
    {
        printf("%d est plus grand que %d\n",b,a);
    }
    else if ( a > b )
    {
        printf("%d est plus petit que %d\n",b,a);
    }
}
