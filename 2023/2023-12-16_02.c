#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Asal olup olmadığına bakmak: ");
    scanf ("%d", &n);
    for (a = 2; a < n; ++ a) {
        if ((n % a) == 0) {
            printf ("Sayı asal değildir: %d\n", n);
            break;
        }
    }
    if (n == a) {
        printf ("Sayısı asaldır: %d\n", n);
    }
    return 0;
}
