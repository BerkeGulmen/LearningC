#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * (* argv), char * (* envp)) {
    int a, b, c;
    scanf ("%d%*c", &a);
    if (a == 0) {
        printf ("1");
    }
    else {
        for (b = 1, c = 1; b <= a; ++ b) {
            c *= b;
        }
        printf ("%d\n", c);
    }
    return EXIT_SUCCESS;
}
