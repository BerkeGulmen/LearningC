#include <stdio.h>
int main (void) {
    int secim;
    double a;
    double b;
    printf ("Celsius için 1 ve Fahrenheit için ise 2'ye bas: ");
    scanf ("%d", &secim);
    if (secim == 1) {
        printf ("Celsius'u gir: ");
        scanf ("%lf", &a);
        b = (a * 1.8) + 32.0;
        printf ("Celsius'un Fahrenheit'e çevrilmesinin sonucu: %lf\n", b);
    }
    else if (secim == 2) {
        printf ("Fahrenheit'i gir: ");
        scanf ("%lf", &a);
        b = (a - 32.0) * (1.0 / 1.8);
        printf ("Fahrenheit'in Celsius'un çevrilmesinin sonucu: %lf\n", b);
    }
    else {
        printf ("Hatalı girdiniz ekrana yazdırdığımız sayılardan ikisinden birisini seç.\n");
    }
    return 0;
}
