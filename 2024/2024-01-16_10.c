#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (b = 1, c = 0; b <= a; ++ b) {
        c += (b * b);
    }
    printf ("Toplamının sonucu: %d\n", c);
    return EXIT_SUCCESS;
}
