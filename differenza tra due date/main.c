#include <stdio.h>

int main(void) {
  int giorno1,giorno2,mese1,mese2,anno1,anno2;
  int diff;
  printf("calcolo differenza tra due date\ninserire la prima data");
  scanf("%d %d %d",&giorno1,&mese1,&anno1);
  printf("inserire la second data");
  scanf("%d %d %d",&giorno2,&mese2,&anno2);
  diff=(giorno2-giorno1)+(mese2-mese1)*30+(anno2-anno1)*360;
  giorno1=diff%30;
  mese1=diff/30%12;
  anno1=diff/360;
  printf("differenza tra le due date: %d giorni ",diff);

}
