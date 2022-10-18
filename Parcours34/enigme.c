#include <stdio.h>
#include <string.h>

// char *helloChaine();

// int main()
// {
//     char *chaine = helloChaine();

//     printf("la chaine est: %s \n", chaine);
// }

// char *helloChaine()
// {
//     char s[] = "hello world";
//     return s;
// }
//
// Ne fonctionne pas car s a une adresse locale et il faut envoyer un pointeur :
//
//  char * s = "hello world";

const char *myName()
{
    char *name = "Ducobu";
    return name;
}

int main()
{
    printf("votre nom : %s", myName());
}

const char *myName()
{
    char name[10] = "Ducobu";
    return name;
}

int main()
{
    printf("votre nom : %s", myName());
}
