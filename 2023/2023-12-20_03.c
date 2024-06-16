#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Asal olup olmadığına bakmak için sayı gir: ");
    scanf ("%d", &n);
    a = 2;
    while (a < n) {
        if ((n % a) == 0) {
            printf ("Asal değil: %d\n", n);
            break;
        }
        ++ a;
    }
    if (n == a) {
        printf ("Asal: %d\n", n);
    }
    return 0;
}
