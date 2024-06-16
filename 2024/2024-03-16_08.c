#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int *a;
    a = (int *) calloc (1, sizeof(char));
    *(a + 0) = 5;
    int b, d;
    //a = &b;
    //*a = 5;
    printf ("%d\n", *a);
    printf ("%p\n", a);
    //printf ("%d\n", b);
    int *c;
    c = (int *) calloc (3, sizeof(char));
    *(c + 0) = 11;
    *(c + 1) = 12;
    *(c + 2) = 13;
    for (d = 0; d < 3; ++ d) {
        printf ("%d ", *(c + d));
    }
    printf ("\n");
    free (a);
    free (c);
    return EXIT_SUCCESS;
}
