#include <stdio.h>

int v, pc; //Value(v), Percentage(pc);
float e; //Ergebnis(e);

int main()
{
    printf("Wert angeben: ");
    scanf("%d", &v);
    printf("Prozentsatz angeben: ");
    scanf("%d", &pc);
    e = v*(pc/100.00);
    printf("%d%% of %d equals %.1f\n", pc,v,e);

}
