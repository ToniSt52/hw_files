#include <stdio.h>

int d = 4, m = 2, e = 2, r = 5, s = 3; // Noten: Deutsch(d), Mathe(m), Englisch(e), Religion(r), Sport(s)
int g; // Noten addiert, gesamt
float avg; //Notendurchschnitt

int main()
{
    int n[5] = {d, m ,e ,r ,s};
    g = d+m+e+r+s;
    avg = g/5.00;
    
    printf("Einzelnoten: Deutsch: %d, Mathe: %d, Englisch: %d, Religion: %d, Sport: %d\n" , d,m,e,r,s);
    printf("Notendurchschnitt: %.2f\n",avg);


    return 0;
}