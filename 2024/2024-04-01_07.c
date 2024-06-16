//Kullanıcıdan kaç tane sayı gireceği sorulur. Kullanıcının girdiği sayılar içinde en büyük ile en küçük arasındaki fark
//ekrana yazdırılır.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e = 0, f = 0;
    printf ("Kaç adet değer gireceksiniz?");
    scanf ("%d", &a);
    for (b = 0; b < a; ++ b) {
        printf ("%d. değer: ", b);
        scanf ("%d", &c);
        if (b == 0) {
            e = c;
            f = c;
            d = 1;
            continue;
        }
        if (c < e) {
            e = c;
        }
        if (c > f) {
            f = c;
        }
    }
    printf ("Fark: %d\n", f - e);
    return EXIT_SUCCESS;
}
