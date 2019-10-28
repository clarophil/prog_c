#include<stdio.h>
#include <string.h>

void helloChaine(char s[]);

int main()
{
    char chaine[20];
    helloChaine(chaine);

	printf("la chaine est: %s \n", chaine );
    
    return 0;
}

void helloChaine(char s[])
{
	strcpy(s, "abcdef");
}