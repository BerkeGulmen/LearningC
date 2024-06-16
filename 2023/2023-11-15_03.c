#include <stdio.h>
int main (void) {
    int a = 4;
    int b = 6;
    int carpim, kalan;
    carpim = a * b;
    kalan = a % b;
    printf ("%d\n", carpim);
    printf ("%d\n", kalan);
    if (a == b) {
        printf ("Eşit.\n");
    }
    if (a != b) {
        printf ("Eşit değil.\n");
    }
    return 0;
}
