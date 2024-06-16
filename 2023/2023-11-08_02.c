#include <stdio.h>
int main (void) {
    int islem;
    islem = 0;
    while (islem < 1 || islem > 4) {
        int a;
        int b;
        printf ("a değişkenine sayı giriniz: ");
        scanf ("%d", &a);
        printf ("b değişkenine sayı giriniz: ");
        scanf ("%d", &b);
        printf ("Toplama için 1, çıkarma için 2, çarpma için 3, bölme için 4 seçiniz: ");
        scanf ("%d", &islem);
        if (islem == 1) {
            printf ("Toplamanın sonucu: %d\n", a + b);
        }
        else if (islem == 2) {
            printf ("Çıkarmanın sonucu: %d\n", a - b);
        }
        else if (islem == 3) {
            printf ("Çarpmanın sonucu: %d\n", a * b);
        }
        else if (islem == 4) {
            printf ("Bölmenin sonucu: %d\n", a / b);
        }
        else {
            printf ("Tekrar deneyiniz.\n");
        }
    }
    return 0;
}
