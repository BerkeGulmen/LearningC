#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a;
    printf ("100'den faklı bir sayı giriniz? ");
    scanf ("%d", &a);
    if (a < 100) {
        for (; a <= 100; ++ a) {
            printf ("%d\n", a);
        }
    }
    else if (a > 100) {
        for (; a >= 100; -- a) {
            printf ("%d\n", a);
        }
    }
    else {
        printf ("Hatalı bir sayı girdiniz.\n");
    }
    return EXIT_SUCCESS;
}
