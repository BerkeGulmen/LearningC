#include <stdio.h>
#define PI 3.14
int main (void) {
    double a, b, alan = 0, cap, yaricap;
    int secim;
    printf ("Karenin alanı için 1, dikdörtgen için 2, daire için ise 3 gir: ");
    scanf ("%d", &secim);
    if (secim == 1) {
        printf ("Karenin bir kenarını gir: ");
        scanf ("%lf", &a);
        printf ("Karenin alanı: %lf\n", a * a);
    }
    else if (secim == 2) {
        printf ("Dikdörteginin bir kenarını gir: ");
        scanf ("%lf", &a);
        printf ("Dikdörteginin diğer bir kenarını gir: ");
        scanf ("%lf", &b);
        printf ("Dikdörtgenin alanı: %lf\n", a * b);
    }
    else if (secim == 3) {
        printf ("Dairenin çapını gir: ");
        scanf ("%lf", &cap);
        yaricap = cap / 2.0;
        printf ("Dairenin alanı: %lf\n", yaricap * yaricap * PI);
    }
    else {
        printf ("%.3lf\n", alan);
    }
    return 0;
}
