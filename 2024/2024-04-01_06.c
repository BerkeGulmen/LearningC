//Kullanıcıdan kaç tane sayı gireceği sorulur. Kullanıcının girdiği sayılar içinde en büyük ile en küçük arasındaki fark
//ekrana yazdırılır.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d = 1, e;
    printf ("Kaç tane sayı gireceksin? ");
    scanf ("%d", &a);
    int b [a], * k;
    k = (int *) calloc (a, sizeof (int));
    for (c = 0; c < a; ++ c) {
        printf ("%d. sayıyı gir: ", c);
        scanf ("%d", &b [c]);
        * (k + c) = b [c];
    }
    while (d == 1) {
        d = 0;
        for (c = 0; c < (a - 1); ++ c) {
            if (* (k + c + 1) < * (k + c)) {
                e = * (k + c + 1);
                * (k + c + 1) = * (k + c);
                * (k + c) = e;
                d = 1;
            }
        }
    }
    c = 0;
    d = a - 1;
    printf ("%d\n", * (k + d) - * (k + c));
    return EXIT_SUCCESS;
}
