#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, n;
    printf ("Hangi sayının asal olup omadağına bakıyım? ");
    scanf ("%d", &n);
    for (a = 2; a < n; ++ a) {
        if ((n % a) == 0) {
            printf ("Girdiğiniz sayı asal değil: %d\n", n);
            break;
        }
    }
    if (n == a) {
        printf ("Girdiğiniz sayı asal: %d\n", n);
    }
    return EXIT_SUCCESS;
}
