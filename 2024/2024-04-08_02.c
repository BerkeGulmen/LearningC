#include <stdio.h>
#include <stdlib.h>

int * s (int);
void k (int *, int);
void x (int *, int);
void y (int *);
int main (int argc, char **argv, char **envp) {
    int a, * b;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    b = s (a);
    k (b, a);
    x (b, a);
    y (b);
    return EXIT_SUCCESS;
}
int * s (int a) {
    int * muhittinAbi;
    muhittinAbi = (int *) calloc (a, sizeof (int));
    return muhittinAbi;
}
void k (int * muhittinAbi, int t) {
    int a, b;
    for (a = 0; a < t; ++ a) {
        printf ("Muhittin abinin %d. elemanını gir: ", a);
        scanf ("%d", &b);
        * (muhittinAbi + a) = b;
    }
}
void x (int * muhittinAbi, int mahmudAbi) {
    int a;
    for (a = 0; a < mahmudAbi; ++ a) {
        printf ("%d ", * (muhittinAbi + a));
    }
    printf ("\n");
}
void y (int * muhittinAbi) {
    free (muhittinAbi);
}
