#include <stdio.h>
int main (void) {
    int t, u, k, sonuc;
    printf ("Tabanı gir: ");
    scanf ("%d", &t);
    printf ("Üssü gir: ");
    scanf ("%d", &u);
    for (k = 0, sonuc = 1; k < u; ++ k, sonuc *= t) {
    }
    printf ("Sonuç: %d\n", sonuc);
    return 0;
}
