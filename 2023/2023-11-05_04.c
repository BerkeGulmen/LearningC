#include <stdio.h>
int main (void) {
    int secim;
    printf ("Toplamlarını hesaplamak için 2, çarpımlarını hesaplamak için ise 3'ü yazınız. ");
    scanf ("%d", &secim);
    if (secim == 2) {
        int toplam;
        int b;
        int a;
        printf ("Kaça kadar toplansın? ");
        scanf ("%d", &a);
        toplam = 0;
        b = 1;
        while (a >= b) {
            toplam = toplam + b;
            b = b + 1;
        }
        printf ("Sayıların toplamı: %d\n", toplam);
    }
    else if (secim == 3) {
        int a;
        int b;
        int carpim;
        printf ("Kaça kadar çarpılsın? ");
        scanf ("%d", &a);
        carpim = 1;
        b = 2;
        while (a >= b) {
            carpim = carpim * b;
            b = b + 1;
        }
        printf ("Sayıların çarpımı: %d\n", carpim);
    }
    else {
        printf ("Lütfen bu sayıları girmeyiniz, ekranda yazılan cümleyi okuyunuz ve öyle yazınız.\n");
    }
    return 0;
}
