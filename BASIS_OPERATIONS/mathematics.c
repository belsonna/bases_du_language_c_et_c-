#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int factoriel(int n);
int X(int a,int b,int n);
int Y(int a,int b,int n);
int combinaison(int p,int q);
int arithmetique(int n,int u,int r);
int geometrique(int n,int u,int q);
float arithmeticogeometrique(float u,int q);
int fibonnaci(int n);
int a;int b;int r;
int tab[100];
int main()
{
    int choix;
    printf("*****************************************\n");
    printf("*          MENU PRINCIPAL               *\n");
    printf("*****************************************\n");
    printf("*          1- FACTORIEL                 *\n");
    printf("*          2- RECURSIVITE INDIRECTE     *\n");
    printf("*          3- COMBINAISON               *\n");
    printf("*          4- ARITHMETIQUE              *\n");
    printf("*          5- GEOMETRIQUE               *\n");
    printf("*          6- ARITHMETICO-GEOMETRIQUE   *\n");
    printf("*          7- FIBONACCI                 *\n");
    printf("*****************************************\n");
    printf("faites un choix\n");
    scanf("%d",&choix);
    switch (choix)
    {
    case 1: {
            int f;
            printf("entrer une valeur entiere\t");
            scanf("%d",&f);
            printf("le factoriel de %d est %d",f,factoriel(f));
            break;
            }

    case 2:
            {

                printf("entrer labcisse\t");
                scanf("%d",&a);
                printf("entrer lordonnee\t");
                scanf("%d",&b);
                printf("entrer le rang\t");
                scanf("%d",&r);
                printf("le resultat de (%d,%d)de rang %d est (%d,%d)",a,b,r,X(a,b,r),Y(a,b,r));
                break;
           }
    case 3:
           {


            int p,n;

                printf("entrer la valeur de p inferieur qu nombre d\'elements de lacombinaison \t");
                scanf("%d",&p);
                printf("entrer la valeur de n etant le nombre d\'elements\t");
                scanf("%d",&n);
                if (p>n)
                {
                    printf("cette operation n\'est pas possible");

                }
                else
                {
                    printf("la combinaison de %d dans %d est %d",p,n,combinaison(p,n));
                }
                break;

            }
    case 4:
            {
                int p,i,n,somme;

                printf("entrer le nombre de termes\t");
                scanf("%d",&n);
                printf("entrer le premier terme de la suite\t");
                scanf("%d",&p);
                printf("entrer la valeur de la raison\t");
                scanf("%d",&r);
                printf("les %d premiers termes de notre suite sont\n",n);

                for(i=0;i<= n-1;i++)
                {
                    printf("U%d est %d\n",i,arithmetique(i,p,r));
                    tab[i]= arithmetique(i,p,r);

                }
                somme=0;
                for(i=0;i<= n-1;i++)
                {
                    somme=somme + tab[i];

                }

               printf("la somme des %d premiers termes de la suite est %d\n",n,somme);
               break;

            }
        case 5:
            {
                int somme,i,n,p,q;
                printf("entrer le nombre de termes\t");
                scanf("%d",&n);
                printf("entrer le premier terme de la suite\t");
                scanf("%d",&p);
                printf("entrer la valeur de la raison\t");
                scanf("%d",&q);
                printf("les %d premiers termes de notre suite sont\n",n);

                for(i=0;i<= n-1;i++)
                {
                    printf("U%d est %d\n",i,geometrique(i,p,q));
                    tab[i]= geometrique(i,p,q);

                }
                somme=0;
                for(i=0;i<= n-1;i++)
                {
                    somme=somme + tab[i];

                }

               printf("la somme des %d premiers termes de la suite est %d\n",n,somme);
               break;

            }

    case 6:
            {
                int q,p,i,n,somme;

                printf("entrer le nombre de termes\t");
                scanf("%d",&n);
                printf("entrer le premier terme de la suite\t");
                scanf("%d",&p);
                printf("entrer la valeur de la raison arithmetique\t");
                scanf("%d",&r);
                printf("entrer la valeur de la raison geometrique\t");
                scanf("%d",&q);
                printf("les %d premiers termes de notre suite sont\n",n);

                for(i=0;i<= n-1;i++)
                {
                    if (i==0)
                    {
                       printf("U%d est %d\n",i,arithmetique(i,p,r));
                       tab[i]= arithmetique(i,p,r);

                    }
                    else
                    {
                       printf("U%d est %d\n",i,q*arithmetique(i,p,r));
                       tab[i]= q*arithmetique(i,p,r);

                    }

                }
                somme=0;
                for(i=0;i<= n-1;i++)
                {
                    somme=somme + tab[i];
                }

               printf("la somme des %d premiers termes de la suite est %d\n",n,somme);
               break;

            }
            case 7:
            {
                int i,n;
                printf("entrer le nombre\t");
                scanf("%d",&n);
                if (n<1)
                {
                    printf ("operation impossible");
                    exit(1);
                }
                else
                {
                     for(i=1;i<= n;i++)
                        {
                            printf("le nombre de fibonacci de  de %d est %d \n",i,fibonnaci(i));
                        }
                }
                break;
           }

            default: break;


}
}
int factoriel(int n)
{
    if (n<=1)
    {
        return 1;
    }
    else
    {
       return n*factoriel(n-1);
    }

}
int X(int a,int b,int n)
{
    if (n=0)
    {
        return a;

    }
    else
    {
        return (b*X(a,b,n-1));

    }
}
int Y(int a,int b,int n)
{
    if (n=0)
    {
        return b;

    }
    else
    {
        return (X(a,b,n-1)-Y(a,b,n-1));
    }
}
int combinaison(int p,int q)
{
    return (factoriel(q)/(factoriel(p)*factoriel(q-p)));
}
int arithmetique(int n,int u,int r)
{
    if (n==0)
    {
        return u;
    }
    else
    {
        return (r+arithmetique(n-1,u,r));
    }
}
int geometrique(int n,int u,int q)
{
    if (n==0)
    {
        return u;
    }
    else
    {
        return (q*geometrique(n-1,u,q));
    }
}
int fibonnaci(int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return(fibonnaci(n-1)+fibonnaci(n-2));
    }
}



