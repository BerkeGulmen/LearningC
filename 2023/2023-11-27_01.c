#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a;
    int b;
    int n;
    printf ("Kaça kadar çarpım tablosu istersiniz: ");
    scanf ("%d", &n);
    a = 1;
    b = 1;
    while (a < n) {
        b = 1;
        while (b < n) {
            printf ("%d X %d = %d\t", a, b, a * b);
            ++ b;
        }
        ++ a;
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
