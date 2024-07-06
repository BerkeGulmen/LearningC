#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * (* argv), char * (* envp)) {
    int a, b, c, d;
    scanf ("%d%*c", &c);
    for (a = 1, b = 2; a < c;) {
        printf ("%d ", a);
        d = b;
        b += a;
        a = d;
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
