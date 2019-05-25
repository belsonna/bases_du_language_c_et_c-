#include <stdlib.h>
#include<stdio.h>
#include<math.h>

#include "dimitry.h"
void rectangleX(int largeur,int hauteur,int ligne,int colonne,int sens,int nombre);
//void rectangle(int largeur,int hauteur,int ligne,int colonne);
enum tsexe
{ masculin=1,feminin}sexe;
int i,j;
float moy;
struct  tdate
{
  int mois;
  int jour;
  int annee ;
}date;
typedef struct tetudiant
 {
   char nom[15];
   char prenom[15];
   char nation[15];
   char matricule[15];
   char lieunaissance[15];
   int age;
   int notealgo,notelangue,notealgebre,noteanlyse,noteprogr;
   enum tsexe sexe;
   struct tdate datenaissance;
 }etudiant ;
struct tetudiant t[20];
void gotxy (int ligne, int colonne);
void liretudiant(void);
void ecriretudiant(void);
void menuaffichage(void);
void viderBuffer(void);
int n=1,rep;
main()
{
    system("color f6");
    menuaffichage();
    liretudiant();
    ecriretudiant();
    system("PAUSE");

}
void  liretudiant(void)
{

do
{

                    gotoxy(15,8);scanf("%s",&t[n].matricule);
                    viderBuffer();
                    gotoxy(9,10);gets(t[n].nom);
                    gotoxy(12,12);gets(t[n].prenom);
                    gotoxy(18,14);scanf("%s",&t[n].nation);
                    gotoxy(23,16);scanf("%d",&t[n].datenaissance.jour);
                    gotoxy(23,18);scanf("%d",&t[n].datenaissance.mois);
                    gotoxy(24,20);scanf("%d",&t[n].datenaissance.annee);
                    gotoxy(23,22);scanf("%s",&t[n].lieunaissance);
                    gotoxy(41,24);scanf("%d",&t[n].sexe );
                    gotoxy(9,26);scanf("%d",&t[n].age);
                    gotoxy(75,10);scanf ("%d",&t[n].notealgo);
                    gotoxy(68,12);scanf ("%d",&t[n].notelangue);
                    gotoxy(68,14);scanf ("%d",&t[n].notealgebre);
                    gotoxy(68,16);scanf ("%d",&t[n].noteanlyse);
                    gotoxy(75,18);scanf ("%d",&t[n].noteprogr);
                    gotoxy(2,35);printf("voulez -vous continuer 1  pour oui et 0 pour non");
                    gotoxy(10,36);printf("Reponse:");gotoxy(19,36);scanf("%d",&rep);
                    if (rep==1)
                       {
                           system("cls");
                            n++;
                            menuaffichage();
                        }
         }while(rep==1);
}
void menuaffichage(void)

{
    gotoxy(30,1);printf("VEUILLEZ MONSIEUR ENREGISTRE LE %d EME ETUDIANT(ES) ",n);
    rectangle (45,25,1,5);
   rectangleX(45,2,1,5,1,1);
   gotoxy(20,6); printf("VOS DONNEES");
    gotoxy(5,8);printf("matricule:  ");
    gotoxy(5,10);printf("nom:  ");
    gotoxy(5,12);printf("prenom:  ");
    gotoxy(5,14);printf("nationnalit\x82:");
    gotoxy(5,16);printf("jour de naissance:  ");
    gotoxy(5,18);printf("mois de naissance:  ");
    gotoxy(5,20);printf("annee de naissance:  ");
    gotoxy(5,22);printf("lieu de naissance:  ");
    gotoxy(5,24);printf("sexe,1 pour masculin/2pour feminin:  ");
    gotoxy(5,26);printf("age: ");
    rectangle (40,19,47,5);
    system("color 02");
    rectangleX(40,3,47,5,1,1);
    gotoxy(57,6);printf("VOS NOTES S.V.P");
    gotoxy(53,10);printf("note d'algorithmique: ");
    gotoxy(53,12);printf("note de langue: ");
    gotoxy(53,14);printf("note d'algebre: ");
    gotoxy(53,16);printf("note d'analyse: ");
    gotoxy(53,18);printf("note de programation:");
}




void ecriretudiant()
{

    int k,l=3;
    system("cls");
   rectangle(70,40,1,1);
   gotoxy(1,1); rectangle(70,3,1,1);
   gotoxy(30,2);printf("RELEVE   DE   NOTE ");
   for(k=1;k<7;k++)
   {
    rectangleX(25,l,7,20,1,1);
    rectangleX(10,l,32,20,1,1);
    l=l+3;
   }
gotoxy(44,38);printf("Moyenne:_______/20");
gotoxy(7,6);printf("Nom :______________________");
gotoxy(7,8);printf("Penom :_____________________");
gotoxy(7,10);printf("Ne(\x82) le :_____________");
gotoxy(31,10);printf("\x85______________");
gotoxy(47,6);printf("Matricule:___________");
gotoxy(7,12);printf("Sexe:___________");
gotoxy(7,14);printf("Nationalit\x82:______________________");

gotoxy(36,22);printf("NOTE");
gotoxy(17,22);printf("MATIERE");
gotoxy(10,25);printf("Algorithmique");
gotoxy(10,28);printf("Algebre");
gotoxy(10,31);printf("Analyse");
gotoxy(10,34);printf("Langue");
gotoxy(10,37);printf("Programmation");
int reponse;
j=1;

do

{

    gotoxy(58,6);printf("%s",t[j].matricule);
    gotoxy(13,6);printf(" %s",t[j].nom);
    gotoxy(15,8);printf("%s",t[j].prenom);
    gotoxy(17,10);printf("%d/",t[j].datenaissance.jour);
    gotoxy(21,10);printf("%d/",t[j].datenaissance.mois);
    gotoxy(23,10); printf("%d",t[j].datenaissance.annee);
    gotoxy(33,10);printf("%s",t[j].lieunaissance);
    if (t[j].sexe==1)
          {
              gotoxy(14,12);
              printf("masculin");
          }
    else
          {
              gotoxy(14,12);
              printf("feminin");
        }
    gotoxy(20,14);printf("%s",t[j].nation);
    gotoxy(36,25);printf("%d/20",t[j].notealgo);
    gotoxy(36,28);printf("%d/20",t[j].notelangue);
    gotoxy(36,31);printf("%d/20",t[j].notealgebre);
    gotoxy(36,34);printf("%d/20",t[j].noteanlyse);
    gotoxy(36,37);printf("%d/20",t[j].noteprogr);
    gotoxy(62,40);printf("page:%d/%d",j,n);
    moy=(t[j].notealgebre+t[j].noteprogr+t[j].noteanlyse+t[j].notealgo+t[j].notelangue)/5;
    gotoxy(53,38);printf("%.2f",moy);
    gotoxy(1,44);

    printf("Appuyez sur  1 pour page suivante ou 0 pour sortir ");
    scanf("%d",&reponse);
    if (reponse==0)
        printf(" Merci ");
    j++;
}
while  ( (j<=n)  &&(reponse==1) )  ;
}
void viderBuffer(void)
{
    int c=0;
    while((c=getchar())!='\n'&&c!=EOF);
}


