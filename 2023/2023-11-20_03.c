#include <stdio.h>
int main (void) {
    int a;
    int b;
    printf ("1. kullanıcı sayı gir: ");
    scanf ("%d", &a);
    while (a != 0) {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf ("2. kullanıcı sayı tahmininde bulunun: ");
        scanf ("%d", &b);
        while (a != b) {
            if (a > b) {
                printf ("Daha büyük sayı tahmininde bulununuz: ");
                scanf ("%d", &b);
            }
            else if (a < b) {
                printf ("Daha küçük sayı tahmininde bulununuz: ");
                scanf ("%d", &b);
            }
        }
        printf ("TEBRİKLER BULDUNUZ!!!, çıkmak için 0 giriniz. 1. kullanıcı sayı gir: ");
        scanf ("%d", &a);
    }
    return 0;
}
