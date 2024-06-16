#include <stdio.h>
int main (void) {
    int a;
    int b;
    printf ("Oyundan çıkamak için 0 yazınız.\n");
    printf ("1. oyuncu sayı giriniz: ");
    scanf ("%d", &a);
    printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    while (a != 0) {
        printf ("2. oyuncu tahminde bulununuz: ");
        scanf ("%d", &b);
        while (a != b) {
            if (a < b) {
                printf ("Lütfen daha küçük bir sayı giriniz: ");
                scanf ("%d", &b);
            }
            else if (a > b) {
                printf ("Lütfen daha büyük bir sayı giriniz: ");
                scanf ("%d", &b);
            }
        }
        printf ("TEBRİKLER doğru sayıyı buldunuz, doğru sayının değeri: %d\n", a);
        printf ("Oyundan çıkmak için 0 yazabilirsiniz isterseniz.\n");
        printf ("1. oyuncu tekrar sayı giriniz: ");
        scanf ("%d", &a);
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
    return 0;
}
