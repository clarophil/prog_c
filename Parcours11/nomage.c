#include<stdio.h>
#include<string.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nom[20] ;
    int age = 0;
    printf("quel est votre nom  ?\n");
    scanf("%s", nom);
    printf("quel est votre age ?\n");
    scanf("%d", &age);
    printf("je m'appelle %s et j'ai %d ans\n",nom,age);

    return 0;
}
 