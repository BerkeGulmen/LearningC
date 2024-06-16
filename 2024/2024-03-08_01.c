/*
fonksiyon.
*/
#include <stdio.h>
#include <stdlib.h>

int b (int);
int main (int argc, char **argv, char **envp) {
    int a;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    if (b (a) == 0) {
        printf ("Asal no\n");
    }
    if (b (a) == 1) {
        printf ("Asal yes\n");
    }
    return EXIT_SUCCESS;
}
int b (int n) {
    int a;
    for (a = 2; a < n; ++ a) {
        if ((n % a) == 0) {
            return 0;
            break;
        }
    }
    if (n == a) {
        return 1;
    }
    return 0;
}
