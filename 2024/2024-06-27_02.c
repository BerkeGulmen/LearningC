#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char ** argv, char ** envp) {
    int a;
    int *b;
    int e = 0;
    scanf ("%d%*c", &a);
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
    for (int f = 0, h = 0; f < (a - 1); ++ f) {
        for (int i = f + 1; i < a; ++ i) {
            if (* (b + f) < * (b + i)) {
                h = * (b + i);
                * (b + i) = * (b + f);
                * (b + f) = h;
            }
        }
    }
    for (int f = 0; f < a; ++ f) {
        printf ("%d ", * (b + f));
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
