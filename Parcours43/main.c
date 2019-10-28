#include <stdio.h>
#include <locale.h>
#include "outils.h"

int main(int argc, char **argv)
{
    setlocale(LC_ALL, "");
	printf("Parcours 42\n");
    dog();
}
