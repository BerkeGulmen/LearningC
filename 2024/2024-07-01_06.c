#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * (* argv), char * (* envp)) {
    int a, b, c, d;
    scanf ("%d%*c", &a);
    if (a == 0) {
        printf ("1\n");
    }
    else {
        for (b = 0, c = 2, d = 1; b < a; ++ b) {
            d *= c;
        }
        printf ("%d\n", d);
    }
    return EXIT_SUCCESS;
}
