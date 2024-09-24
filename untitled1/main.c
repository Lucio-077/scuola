#include <stdio.h>

int main(void) {
    int ora1,ora2,minuti1,minuti2,secondi1,secondi2,differenza;
    float conv;
    printf("calcolo della differenza tra i secondi dei 2 orari : \inserire l'ora del primo orario :");
    scanf("%d",&ora1);
    printf("inserire l'ora del secondo orario : ");
    scanf("%d",&ora2);
    printf("inserire i minuti del primo orario : ");
    scanf("%d",&minuti1);
    printf ("inserire i minuti del secondo orario : ");
    scanf("%d",&minuti2);
    printf("insere i secondi del primo orario : ");
    scanf("%d",&secondi1);
    printf ("inserire i secondi del secondo orario : ");
    scanf("%d",&secondi2);
    //calcolo della differenza in secondi
    //conversione secondi
    secondi1 +=ora1*3600 + minuti1*60;
    secondi2 +=ora2*3600 + minuti2*60;
    //differenza secondi
    if (secondi1>secondi2)
        differenza = secondi1-secondi2;
    else
        differenza = secondi2-secondi1;
    printf("differenza : %d secondi\n", differenza);
    conv = differenza/3600;
    //conversione secondi in ore
    printf("conversione in ore: %f ore\n", conv);
        }
