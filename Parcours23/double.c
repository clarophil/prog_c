#include <stdio.h>
#include <locale.h>

void doublon();

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "");
    doublon("aaabbbaaaffff");
	return 0;
}

void doublon(char chaine[])
{
    char sortie[20];
    int i = 0;
    int j = 0 ;

    sortie[0]=chaine[0];
	while(chaine[i] != '\0')
	{
		i++;
		if (sortie[j] != chaine[i])
        {
            j++;
            sortie[j] = chaine[i];
        }
	}

    printf("Chaine sans doublon %s\n",sortie);
}
