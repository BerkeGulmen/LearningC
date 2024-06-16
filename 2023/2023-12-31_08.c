#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, toplam;
    printf ("100'den faklı bir sayı giriniz? ");
    scanf ("%d", &a);
    if (a < 100) {
        for (toplam = 0; a <= 100; ++ a) {
            if ((a % 2) == 1) {
                toplam += a;
            }
        }
        printf ("Tek sayıların toplamlarının sonucu: %d\n", toplam);
    }
    else if (a > 100) {
        for (toplam = 0; a >= 100; -- a) {
            if ((a % 2) == 1) {
                toplam += a;
            }
        }
        printf ("Tek sayıların toplamlarının sonucu: %d\n", toplam);
    }
    else {
        printf ("Hatalı bir sayı girdiniz.\n");
    }
    return EXIT_SUCCESS;
}
