#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, n;
    printf ("Hangi sayının bölenlerini ayırayım? ");
    scanf ("%d", &n);
    for (a = 2; a <= n; ) {
        if ((n % a) == 0) {
            printf ("%d\n", a);
            n /= a;
        }
        else {
            ++ a;
        }
    }
    return EXIT_SUCCESS;
}
