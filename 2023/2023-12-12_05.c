#include <stdio.h>
int main (void) {
    int a, b, toplam, carpim, secim, n;
    printf ("Sayıların toplamı için 1, sayıların çarpımı için 2 gir: ");
    scanf ("%d", &secim);
    if (secim == 1) {
        printf ("Kaça kadar sayıların toplamını istiyorsunuz? ");
        scanf ("%d", &n);
        a = 0;
        toplam = 0;
        while (a < n) {
            toplam += a;
            ++ a;
        }
        printf ("%d\n", toplam);
    }
    else if (secim == 2) {
        printf ("Kaça kadar sayıların faktöriyeli? ");
        scanf ("%d", &n);
        a = 1;
        carpim = 1;
        while (a < n) {
            carpim *= a;
            ++ a;
        }
        printf ("%d\n", carpim);
    }
    else {
        printf ("Hatalı.\n");
    }
    return 0;
}
