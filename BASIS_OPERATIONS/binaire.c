#include<stdio.h>
#include<stdlib.h>
int tab[0];
main()
{
    int s,i,j=0,nbr;
    printf("Le programme corvertie les entiers naturels en binaire pur:\n Entrez un nombre\t\t n=");
    scanf("%d",&nbr);
    if (nbr<0)
            printf("le nombre n'est pas un entier naturel");
    else
        i=0;
        do
            {
                tab[i]=nbr%2;
                nbr=nbr/2;
                i++;
            }
        while(nbr!=0);
    for (j=i;j>-1;j--)
        printf("%d",tab[j]);
    printf("\n");
    system("pause");
}
