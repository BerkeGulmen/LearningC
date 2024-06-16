#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Sayı gir: ");
    scanf ("%d", &n);
    for (a = 2; a < n; ++ a) {
        if ((n % a) == 0) {
            printf ("Asal değil: %d\n", n);
            break;
        }
    }
    if (n == a) {
        printf ("Sayı asal: %d\n", n);
    }
    return 0;
}
