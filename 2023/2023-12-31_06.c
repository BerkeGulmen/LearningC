#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a;
    printf ("100'den büyük bir sayı gir: ");
    scanf ("%d", &a);
    for (; a >= 100; -- a) {
        printf ("%d\n", a);
    }
    return EXIT_SUCCESS;
}
