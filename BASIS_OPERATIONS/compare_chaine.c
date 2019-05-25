#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define  per "ons"
#define Max 50
char d[Max];
char f[10];
int p,n,i,j;
main()
{
 char *c[10]={  "e","es","e","ons","ez","ent"};
char *k[10]={"Je","Tu","Il","Nous","Vous","Ils"};
  printf(" entrez la premier chaine de caractere ");
  scanf("%s",&d);
  printf(" entrez la deuxieme chaine de caractere ");
  scanf("%s",&f);
  n=strlen(d);

    char chaine[n];
   //typedef enum termin[6]={  "e" "es","e","ons","ez","ent"};
    strncpy(chaine,d,n-2);
for( i=0,j=0;i<6,j<6;i++,j++)
{
    printf( "  %s \t %s%s\n",k[j],chaine,c[i]);
}
    /*printf( "  tu %ses\n",chaine);
    printf( "  il %se\n",chaine);
    printf( "  je %se\n",chaine);
     printf("le mot %s ",chaine);*/


  if(p = strcmpi(d,f)==0)
    printf("les mots sont identique");
  else
        if (p = strcmpi(d,f)<0)
                printf("le mot %s vient avant le mot %s",d,f);
        else
                printf("le mot %s vient avant le mot %s",f,d);


  //system("PAUSE");
  return 0;
}
