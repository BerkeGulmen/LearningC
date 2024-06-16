#include <stdio.h>
int main (void) {
    int t, u, sonuc, k;
    printf ("Tabanı girin: ");
    scanf ("%d", &t);
    printf ("Üssü girin: ");
    scanf ("%d", &u);
    sonuc = 1;
    k = 0;
    while (k < u) {
        ++ k;
        sonuc *= t;
    }
    printf ("%d\n", sonuc);
    return 0;
}
