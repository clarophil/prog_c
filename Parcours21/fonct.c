#include<stdio.h>
#include<string.h>

int findmin(int a,int b);
int findmax(int a, int b);
int findabs(int a, int b, int c);

int main()
{
    int a,b,c;
    printf("Entrer 3 nombres :\n");
    scanf("%d %d %d",&a,&b, &c);
    findabs(a,b,c);

    return 0;
}

int abs(int a) {
    if(a < 0) a=-a;
    return a;
}

int findmin(int a, int b)
{
    int lemin;
    if (abs(a) < abs(b))
    {
        lemin = a;
    }
    else lemin = b;
    return lemin;
}

int findmax(int a, int b)
{
    int lemax;
    if (abs(a) > abs(b))
    {
        lemax = a;
    }
    else lemax = b;
    return lemax;
}

int findabs(int a, int b, int c)
{
    int minabc, maxabc;
    minabc = findmin(abs(a),abs(b));
    minabc = findmin(minabc,abs(c));
    maxabc = findmax(abs(a),abs(b));
    maxabc = findmax(maxabc,abs(c));
    printf("Le minimum en valeur absolue est %d\n",minabc);
    printf("Le maximum en valeur absolue est %d\n",maxabc);
    return 0;
}
