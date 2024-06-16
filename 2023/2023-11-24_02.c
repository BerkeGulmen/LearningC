#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, n, kalan;
    printf ("Kaça kadar asal sayıları yazayım?");
    scanf ("%d", &n);
    a = 2;
    while (a < n) {
        b = 2;
        kalan = 1;
        while (b < a) {
            if ((a % b) == 0) {
                kalan = 0;
            }
            ++ b;
        }
        if (kalan == 1) {
            printf ("%d\n", a);
        }
        ++ a;
    }
    return EXIT_SUCCESS;
}
