#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, n;
    printf ("Hangi sayının asal olup olmadığına bakayım? ");
    scanf ("%d", &n);
    for (a = 2; a < n; ++ a) {
        if ((n % a) == 0) {
            printf ("Girdiğiniz sayı asal değildir: %d\n", n);
            break;
        }
    }
    if (a == n) {
        printf ("Girdiğiniz sayı asaldır: %d\n", n);
    }
    return EXIT_SUCCESS;
}
