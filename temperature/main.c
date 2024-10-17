#include <stdio.h>

int main(void) {
    int temperatura;
    int aumento=0;
    int diminuizione=0;
    int temperaturaorginaria= 5;
    printf("Inserira la temperatura dei 10 giorni: ");
    for(int i=0;i<10;i++) {
        printf("\ntemperatura giorno %d: ", i+1);
        scanf("%d",&temperatura);

        if(temperatura>temperaturaorginaria) {
            aumento++;
        }

        else if(temperatura<temperaturaorginaria) {
            diminuizione++;
        }
        }


        printf("numero di volte che la temperatura e' aumentata: %d\n", aumento);
        printf("numero di volte che la temperatura e' diminuita: %d\n", diminuizione);


}
