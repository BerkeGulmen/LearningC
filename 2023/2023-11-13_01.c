#include <stdio.h>
int main (void) {
    int a;
    int b;
    a = 1;
    b = 3;
    printf ("1. kullanıcı 0'dan farklı bir sayı gir: ");
    scanf ("%d", &a);
    printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf ("2. kullanıcı sayı tahmininde bulun: ");
    scanf ("%d", &b);
    while (a != 0) {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        while (a != b) {
            if (a > b) {
                printf ("Daha büyük bir sayı gir: ");
                scanf ("%d", &b);
            }
            else if (a < b) {
                printf ("Daha küçük bir sayı gir: ");
                scanf ("%d", &b);
            }
            else {
                printf ("TEBRİKLER, BULDUNU! Oyundan çıkmak için 0, Devam etmek için ise 0'dan farklı bir sayı giriniz:");
                printf ("1. kullanıcı sayı giriniz: ");
                scanf ("%d", &a);
            }
        }

    }
    return 0;
}
