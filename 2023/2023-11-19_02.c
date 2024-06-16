#include <stdio.h>
#define PI 3.14
int main (void) {
    double a, b, alan = 0, cap, yaricap, pi;
    int secim;
    const int sabit;
    printf ("Kare için 1, dikdörtgen için 2, daire için ise 3'e bas: ");
    scanf ("%d", &secim);
    if (secim == 1) {
        printf ("Kare nin bir kenarını gir\n");
        scanf ("%lf", &a);
        printf ("Karenin alanı: %lf\n", a * a);
    }
    else if (secim == 2) {
        printf ("Dikdörtgenin bir kenarını girin\n");
        scanf ("%lf", &a);
        printf ("Dikdörtgenin diğer kenarını girin\n");
        scanf ("%lf", &b);
        printf ("Alanı = %lf\n", a * b);
    }
    else if (secim == 3) {
        printf ("Dairenin capını gir\n");
        scanf ("%lf", &cap);
        yaricap = cap / 2;
        printf ("Dairenin alanı: %lf\n", yaricap * yaricap * PI);
    }
    else {
        printf ("%.3lf", alan);
    }
    return 0;
}
