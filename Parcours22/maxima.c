    #include<stdio.h>
    #include<string.h>
    int maximum (int vecteur[], int longueur);
    
    int main()
    {
        int a;
        int longueur;
        printf("Quelle est la longueur du vecteur? \n");
        scanf("%d", &longueur);
        int vecteur[longueur];
        for(a = 0; a < longueur; a++)
        {
            int b;
            printf("Quelle est la valeur du terme numero %d? \n", a+1 );
            scanf("%d",&b);
            vecteur[a] = b;
        }
       printf("La valeur maximale contenue dans le vecteur est %d\n", maximum (vecteur,longueur));
       
       return 0;
    }
    int maximum (int vecteur[], int longueur)
    {
        int a;
        int max = vecteur[0];
        for(a = 1; a < longueur; a++)
        {
            if(vecteur[a] > max)
            {
                max =  vecteur[a];
            }
        }
        return max;
    }
