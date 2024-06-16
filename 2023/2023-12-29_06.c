#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a;
    printf ("Kaça kadar sayıları yazdırayım? ");
    scanf ("%d", &a);
    for (; a <= 100; ++ a) {
        printf ("%d\n", a);
    }
    return EXIT_SUCCESS;
}
