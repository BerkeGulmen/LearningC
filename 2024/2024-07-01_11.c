/*
 Kullanıcıdan kaç tane sayı gireceği sorulur. Kullanıcının girdiği sayılar içinde en büyük ile en küçük arasındaki fark ekrana yazdırılır.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * (* argv), char * (* envp)) {
    int a, e = 0;
    int * b;
    scanf ("%d%*c", &a);
    b = (int *) calloc (a, sizeof (int));
    char * c;
    c = (char *) calloc (2147483647, sizeof (char));
    scanf ("%2147483646[^\n]%*c", c);
    char * d;
    d = strtok (c, " ");
    while (d != NULL) {
        * (b + e) = (int) (strtol (d, (char **) NULL, 10));
        ++ e;
        d = strtok ((char *) NULL, " ");
    }
    free (d);
    free (c);
    int f, g;
    f = * (b + 0);
    g = * (b + 0);
    for (e = 0; e < a; ++ e) {
        if (* (b + e) > f) {
            f = * (b + e);
        }
        if (* (b + e) < g) {
            g = * (b + e);
        }
    }
    printf ("%d\n", f - g);
    return EXIT_SUCCESS;
}
