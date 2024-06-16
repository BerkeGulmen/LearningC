#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, n;
    printf ("Kaça kadar fibonasi serileri? ");
    scanf ("%d", &n);
    for (a = 1, b = 2, c = 0; a < n; ) {
        printf ("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    return EXIT_SUCCESS;
}
