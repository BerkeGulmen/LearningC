#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * (* argv), char * (* envp)) {
    int a, e = 0, g = 1;
    scanf ("%d%*c", &a);
    int *b;
    b = (int *) calloc (a, sizeof (int));
    char *c;
    c = (char *) calloc (2147483647, sizeof (char));
    scanf ("%2147483646[^\n]%*c", c);
    char *d;
    d = strtok (c, " ");
    while (d != NULL) {
        * (b + e) = (int) (strtol (d, (char **) NULL, 10));
        ++ e;
        d = strtok ((char *) NULL, " ");
    }
    free (d);
    free (c);
    while (g == 1) {
        g = 0;
        for (int f = 0, h = 0; f < (a - 1); ++ f) {
            if (* (b + f) < * (b + f + 1)) {
                h = * (b + f + 1);
                * (b + f + 1) = * (b + f);
                * (b + f) = h;
                g = 1;
            }
        }
    }
    for (int f = 0; f < a; ++ f) {
        printf ("%d ", * (b + f));
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
