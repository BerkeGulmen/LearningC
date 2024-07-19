/*
Başlangıç değeri, artış miktarı ve kaç defa artış uygulanacağı kullanıcıdan alınır ve sonuç ekrana yazdırılır.
Başlangıç: 11, artış: 3, adet: 5 ise sonuc: 26
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d %d %d%*c", &a, &b, &c);
    printf ("%d\n", a + b * c);
    return EXIT_SUCCESS;
}
