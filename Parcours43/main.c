// Run task ne fonctionne pas 
// Dans la fenpetre du Terminal, tapez
//    cd Parcours43
//    gcc -g main.c outils.c -o main.exe

#include <stdio.h>
#include <locale.h>
#include "outils.h"

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "");
	printf("Parcours 42\n");
    dog();

    return 0;
}
