//Selection sort.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, * b, c, d;
    b = (int *) calloc (8, sizeof (int));
    * (b + 0) = 3;
    * (b + 1) = 4;
    * (b + 2) = 6;
    * (b + 3) = 7;
    * (b + 4) = 2;
    * (b + 5) = 5;
    * (b + 6) = 1;
    * (b + 7) = 9;
    for (a = 0; a < 8; ++ a) {
        for (c = a + 1; c < 8; ++ c) {
            if (* (b + a) > * (b + c)) {
                d = * (b + a);
                * (b + a) = * (b + c);
                * (b + c) = d;
            }
        }
    }
    for (a = 0; a < 8; ++ a) {
        printf ("%d ", * (b + a));
    }
    printf ("\n");
    free (b);
    return EXIT_SUCCESS;
}
