#include <stdio.h>
int main (void) {
    int islem;
    islem = 0;
    while (islem < 1 || islem > 4) {
        int a;
        int b;
        printf ("a değişkenine sayı gir! ");
        scanf ("%d", &a);
        printf ("b değişkenine sayı gir! ");
        scanf ("%d", &b);
        printf ("Toplama için 1, çıkarma için 2, çarpma için 3, bölme için 4 SEÇ LAN: ");
        scanf ("%d", &islem);
        if (islem == 1) {
            printf ("TOPLAMIN SONUCU OKU: %d\n", a + b);
        }
        else if (islem == 2) {
            printf ("ÇIKARMANIN SONUCU OKU: %d\n", a - b);
        }
        else if (islem == 3) {
            printf ("ÇARPMANIN SONUCU OKU: %d\n", a * b);
        }
        else if (islem == 4) {
            printf ("BÖLMENİN SONUCU OKU: %d\n", a / b);
        }
        else {
            printf ("HATALI SAYIYI DÜZGÜN GİR LAN!\n");
        }
    }
    return 0;
}
