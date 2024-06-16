#include <stdio.h>
#include <stdlib.h>

int b (int);
int main (int argc, char **argv, char **envp) {
    int a;
    printf ("Hangi faktöriyel görmek istiyorsun? ");
    scanf ("%d", &a);
    printf ("Faktöriyelin sonucu: %d\n", b (a));
    return EXIT_SUCCESS;
}
int b (int k) {
    int carpim;
    carpim = 1;
    int b;
    b = 2;
    while (k >= b) {
        carpim = carpim * b;
        b = b + 1;
    }
    return carpim;
}

