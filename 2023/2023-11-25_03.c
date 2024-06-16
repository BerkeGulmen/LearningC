#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, n, kalan;
    printf ("Kaça kadar asal sayıları yazdırıyım: ");
    scanf ("%d", &n);
    a = 2;
    while (a < n) {
        b = 2;
        kalan = 1;
        while (a > b) {
            if (kalan == 0) {
                kalan = 0;
            }
            ++ b;
        }
        ++ a;
        printf ("%d\n", a);
    }
    return EXIT_SUCCESS;
}
