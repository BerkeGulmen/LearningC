/*
Kullanıcı saat ve dakika bilgilerini girsin. Analog saatte o saat anı için akrep ve yelkovan arasında oluşan dar açıyı bulup
ekrana yazdır.
1 dakika geçince yelkovan kaç derece hareket eder: 6 derece
1 saat geçince akrep kaç derece hareket eder: 30 derece
1 dakika geçince akrep kaç derece hareket eder: 0.5 derece
Böylece akrep ve yelkovanın duruş açıları elde edilmiş olur.
akrep ile yelkovan arasındaki düzenlenmemiş açı nasıl bulunur: birinden diğerini çıkararak
açı negatif çıkarsa ne yapılır: -1.0 ile çarpılır
açı 180.0 dereceden büyükse ne yapılır: 180.0 çıkarılır
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;//a: saat, b: dakika
    double c, d, e;//c: akrebin açısı, d: yelkovanın açısı, e: arasındaki açı
    scanf ("%d %d%*c", &a, &b);
    d = (double) b * 6.0;
    c = (double) a * 30.0;
    c += (double) b * 0.5;
    e = c - d;
    if (e < 0) {
        e *= - 1.0;
    }
    if (e > 180.0) {
        e -= 180.0;
    }
    printf ("%lf\n", e);
    return EXIT_SUCCESS;
}
