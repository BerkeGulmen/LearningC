#include <stdio.h>
int main (void) {
    int a;
    int b;
    printf ("1. kullanıcı sayı gir: ");
    scanf ("%d", &a);
    while (a != 0) {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf ("2. kullanıcı sayı tahmininde bulun: ");
        scanf ("%d", &b);
        while (a != b) {
            if (a > b) {
                printf ("Daha büyük sayı gir: ");
                scanf ("%d", &b);
            }
            else if (a < b) {
                printf ("Daha küçük sayı gir: ");
                scanf ("%d", &b);
            }
        }
        printf ("TEBRİKLER BİLDİNİZ!!!, eğer oyundan çıkmak istiyorsanız 0 gir.");
        printf ("1. kullanıcı sayı gir: ");
        scanf ("%d", &a);
    }
    return 0;
}
