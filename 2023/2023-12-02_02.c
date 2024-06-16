#include <stdio.h>
#define PI 3.14
int main (int argc, char **argv, char **envp) {
    double a, b, alan = 0, cap, yaricap;
    int secim;
    printf ("Kare için 1 dikdörtgen için 2 daire için 3: ");
    scanf ("%d", &secim);
    if (secim == 1) {
        printf ("Karenin kenarını gir:");
        scanf ("%lf", &a);
        printf ("Karenin alanı: %lf\n", a * a);
    }
    else if (secim == 2) {
        printf ("Dikdörtgenin kenarını gir: ");
        scanf ("%lf", &a);
        printf ("Dikdörtgenin 2. kenarını gir: ");
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
        printf ("Hatalı sayı.\n");
    }
    return 0;
}
