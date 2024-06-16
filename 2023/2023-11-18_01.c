#include <stdio.h>
int main (void) {
    int a;
    int b;
    a = 2;
    b = 5;
    printf ("Kullanıcı1 0'dan farklı bir sayı gir: ");
    scanf ("%d", &a);
    while (a != 0) {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        while (a != b) {
            printf ("Kullanıcı2 sayı tahmininde bulun: ");
            scanf ("%d", &b);
            if (a > b) {
                printf ("Daha büyük sayı gir\n");
            }
            else if (a < b) {
                printf ("Daha küçük sayı gir\n");
            }
            else {
                printf ("TEBRİKLER BULDUNUZ!!!, eğer oyundan çıkmak istiyoursanız 0 gir.\n");
            }
        }
        printf ("Kullanıcı1 sayı gir: ");
        scanf ("%d", &a);
    }
    return 0;
}
