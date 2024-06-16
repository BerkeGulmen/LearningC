#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Asal olup olmadığını kontrol etmek istediğiniz sayıyı gir: ");
    scanf ("%d", &n);
    for (a = 2; a < n; ++ a) {
        if ((n % a) == 0) {
            printf ("Sayınız asal değil: %d\n", n);
            break;
        }
    }
    if (n == a) {
        printf ("Sayınız asaldır: %d\n", n);
    }
    return 0;
}
