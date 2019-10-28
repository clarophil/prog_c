#include<stdio.h>
void inverse(int vector[5],int new_vector[5],int length);

int main()
{
    int vector[5]={1,2,3,4,5};
    int new_vector[5];
    int length=5,j;
    inverse(vector,new_vector,length);
    for (j = 0 ; j < length ; j++)
    {
        printf("%d ",new_vector[j]);
    }
    printf(" \n");
}
void inverse(int vector[5],int new_vector[5],int length)
{
    int i;
    for( i=0;i<length;i++)
    {
        new_vector[i]=*(vector+(length-1-i));
    }
}
