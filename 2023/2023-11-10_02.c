#include <stdio.h>
int main (void) {
    int a;
    int b;
    a = 1;
    b = 3;
    printf ("1. kullanıcı 0'dan farklı bir sayı gir: ");
    scanf ("%d", &a);
    while (a != 0) {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        while (a != b) {
            printf ("2. kullanıcı sayı gir: ");
            scanf ("%d", &b);
            if (a > b) {
                printf ("Daha büyük sayı gir\n");
            }
            else if (a < b) {
                printf ("Daha küçük sayı gir\n");
            }
            else {
                printf ("TEBRİKLER SAYIYI BULDUNUZ!, eğer oyundan çıkmak istiyorsanız 0 gir.\n");
            }
        }
        printf ("1. kullanıcı sayı gir: ");
        scanf ("%d", &a);
    }
    return 0;
}
