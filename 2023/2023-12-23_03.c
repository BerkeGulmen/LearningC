#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Sayı gir asal olup olmadığına bakmak için: ");
    scanf ("%d", &n);
    for (a = 2; a < n; ++ a) {
        if ((n % a) == 0) {
            printf ("Asal değil: %d\n", n);
            break;
        }
    }
    if (n == a) {
        printf ("Asal: %d\n", n);
    }
    return 0;
}
