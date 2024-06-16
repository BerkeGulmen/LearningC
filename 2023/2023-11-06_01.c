#include <stdio.h>

int main (void) {
    int a;
    printf ("Sayıların toplamı için 10, çarma için ise 20 giriniz.");
    scanf ("%d", &a);
    if (a == 10) {
        int b;
        int c;
        int toplam;
        printf ("Kaça kadar sayıların toplamını buluyım? ");
        scanf ("%d", &b);
        c = 1;
        toplam = 0;
        while (b >= c) {
            toplam = toplam + c;
            c = c + 1;
        }
        printf ("Sayıların toplamının sonucu: %d\n", toplam);
    }
    else if (a == 20) {
        int b;
        int c;
        int carpim;
        printf ("Kaça kadar sayıların faktöryelini bulmamı istersiniz? ");
        scanf ("%d", &b);
        c = 2;
        carpim = 1;
        while (b >= c) {
            carpim = carpim * c;
            c = c + 1;
        }
        printf ("Sayinin faktöryelinin sonucu: %d\n", carpim);
    }
    return 0;
}