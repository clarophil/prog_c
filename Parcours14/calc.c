#include<stdio.h>
#include<string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num1,num2;
    char op, rep;
    double resu;
    
    do 
    {
        printf("Entrer les 2 nombres entiers\n");
        scanf("%d %d", &num1, &num2);
        printf("Quel est l'opérateur ?\n");
        scanf(" %c", &op);

        switch(op) {
            case '+':
                resu = (double)num1 + (double)num2;
                printf("%d + %d = %.1f\n\n",num1, num2, resu);
                break;
            case '-':
                resu = (double)num1 - (double)num2;
                printf("%d - %d = %.1f\n\n",num1, num2, resu);
                break;
            case '*':
                resu = (double)num1 * (double)num2;
                printf("%d * %d = %.1f\n\n",num1, num2, resu);
                break;
            case '/':
                resu = (double)num1 / (double)num2;
                printf("%d / %d = %.1f\n\n",num1, num2, resu);
                break;
            default:
                printf("Opérateur incorrect\n");
                break;
        }
        printf("Souhaitez-vous continuer o/n ?\n");
        scanf(" %c",&rep);
    } while (rep == 'o');
    return 0;
}
