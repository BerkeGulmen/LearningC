#include <stdio.h>
int main (void) {
    int a;
    int b;
    printf ("1. kullanıcı 0'dan farklı bir sayı gir: ");
    scanf ("%d", &a);
    while (a != 0) {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf ("2. kullanıcı sayı tahmininde bulun: ");
        scanf ("%d", &b);
        while (a != b) {
            if (a > b) {
                printf ("Daha büyük bir sayı tahmininde bulun\n");
                scanf ("%d", &b);
            }
            else if (a < b) {
                printf ("Daha küçük bir sayı tahmininde bulun\n");
                scanf ("%d", &b);
            }
        }
        printf ("TEBRİKLER BİLDİNİZ!!!, 1. kullanıcı sayı giriniz eğer çıkmak istiyorsanız 0 gir: ");
        scanf ("%d", &a);
    }
    return 0;
}
