#include<stdio.h>
void viderBuffer(void)
{
    int c = 0;
    while((c = getchar()) !='\n' && c!=EOF);
}

    struct tdate
    {
        enum tjoursemaine{ lundi=1,mardi,mercredi,jeudi,venddredi,samedi,dimanche}joursemaine;
        int  jourmois;
        enum tmois{ janvier=1,favrier,mars,avril,mai,juin,juillet,aoute,septembre,octobre,novembre,decembre}numeromois;
        int annee;
    }date;
 main()
{
    printf(" jour semaine:");
    scanf("%d",&date.joursemaine);
    viderBuffer();
    printf("jour du mois:");
    scanf("%d",&date.jourmois);
    viderBuffer();
    printf( " mois:" );
    scanf("%d",&date.numeromois);
    viderBuffer();
    printf(" annee:");
    scanf("%d",&date.annee);
    system(" cls");
    if( (date.joursemaine<1)||(date.joursemaine>7)||(date.numeromois<1)||(date.numeromois>12)||(date.jourmois<1)||(date.jourmois>31))
        printf("les informations entrees ne sont pas valides");
    printf(" Bonjour, nous sommes ");
    switch ( date.joursemaine)
    {

        case 1 : printf("lundi,le");
                break;
        case 2 : printf("Mardi,le");
                 break;
        case 3 : printf("Mercredi,le");
                 break;
        case 4 : printf("jeudi,le");
                 break;
        case 5 : printf("vendredi,le");
                 break;
        case 6 : printf("samedi,le");
                 break;
        case 7 : printf("Dimanche,le");
                 break;
    }
    printf(" %d ",date.jourmois);
    switch ( date.numeromois)
    {
        case 1 : printf("janvier");
                 break;
        case 2 : printf("fevrier");
                 break;
        case 3 : printf("mars");
             break;
        case 4 : printf("avril");
             break;
        case 5 : printf("mai");
             break;
        case 6 : printf("juin");
             break;
        case 7 : printf("juillet");
             break;
        case 8 : printf( " août");
            break;
        case 9 : printf( " septembre");
             break;
        case 10 : printf( "octobre");
            break;
        case 11 : printf( " novembre");
            break;
        case 12 : printf("decembre " );
             break;
    }
printf(" %d\n\n",date.annee);


}
