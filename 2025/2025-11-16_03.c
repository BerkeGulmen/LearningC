//Merge sort.
#include <stdio.h>
#include <stdlib.h>

void x (int *, int *);
int main (int argc, char * * argv, char * * envp) {
    int * a, b, c, d, e;
    a = (int *) calloc (9, sizeof (int));
    * (a + 0) = 4;
    * (a + 1) = 3;
    * (a + 2) = 7;
    * (a + 3) = 5;
    * (a + 4) = 2;
    * (a + 5) = 6;
    * (a + 6) = 1;
    * (a + 7) = 9;
    * (a + 8) = 8;
    for (b = 0; b < 9; b += 2) {
        if (b == 8) {
            break;
        }
        x ((a + b), (a + b + 1));
    }
    for (b = 0, e = , c = 0; b < 2; ++ b) {
        if (c == 0) {
            c = * (a + b + 2);
        }
        if (* (a + b) > c) {
            d = * (a + b);
            * (a + b) = c;
            c = d;
        }
        else {
            -- b;
        }
    }
    for (b = 0; b < 9; ++ b) {
        printf ("%d ", * (a + b));
    }
    printf ("\n");
    free (a);
    return EXIT_SUCCESS;
}
void x (int *a, int *b) {
    int c;
    if (*a > *b) {
        c = *a;
        *a = *b;
        *b = c;
    }
}
