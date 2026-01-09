//Bubble sort.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int * a, b, c, e;
    a = (int *) calloc (9, sizeof (int));
    * (a + 0) = 3;
    * (a + 1) = 4;
    * (a + 2) = 6;
    * (a + 3) = 7;
    * (a + 4) = 2;
    * (a + 5) = 5;
    * (a + 6) = 1;
    * (a + 7) = 9;
    * (a + 8) = 8;
    for (b = 0; b < 8; ++ b) {
        for (c = b + 1; c < 9; ++ c) {
            if (* (a + b) > * (a + c)) {
                e = * (a + b);
                * (a + b) = * (a + c);
                * (a + c) = e;
            }
        }
    }
    for (b = 0; b < 9; ++ b) {
        printf ("%d ", * (a + b));
    }
    printf ("\n");
    free (a);
    return EXIT_SUCCESS;
}
