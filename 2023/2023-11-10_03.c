// HATALI HATALI HATALI HATALI HATALI
// ERROR! NOT WORK! ERROR! NOT WORK! ERROR! NOT WORK!
#include <stdio.h>
int main (void) {
    int a;
    int b;
    a = 1;
    b = 3;
    printf ("1. kullanıcı 0'dan farklı bir sayı gir: ");
    scanf ("%d", &a);
    while (a != 0) {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        while (a != b) {
            printf ("2. kullanıcı sayı gir: ");
            scanf ("%d", &b);
            if (a > b) {
                printf ("2. kullanıcı daha büyük sayı gir.\n");
            }
            else if (a < b) {
                printf ("2. kullanıcı daha küçük sayı gir.\n");
            }
            else {
                printf ("TEBRİKLER SAYIYI BULDUNUZ!, eğer oyundan çıkmak istiyorsan 0 gir.\n");
            }
        }
        printf ("1. kullanıcı sayı gir: ");
    }
    return 0;
}
