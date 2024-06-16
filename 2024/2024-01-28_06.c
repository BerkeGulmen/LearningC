/*
 Başlangıç değeri, artış miktarı ve kaç defa artış uygulanacağı kullanıcıdan alınır ve sonuç ekrana yazdırılır.
 Başlangıç: 11, artış: 3, adet: 5 ise sonuc: 26
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c;
    printf ("Başlangıç değeri: ");
    scanf ("%d", &a);
    printf ("Artış değeri: ");
    scanf ("%d", &b);
    printf ("Adet değeri: ");
    scanf ("%d", &c);
    a += (b * c);
    printf ("Sonuç: %d\n", a);
    return EXIT_SUCCESS;
}
