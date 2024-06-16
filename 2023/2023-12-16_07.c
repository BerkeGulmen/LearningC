#include <stdio.h>
int main (void) {
    int a, n;
    printf ("Asal olup olmadığını kontrol etmek istediğiniz sayıyı giriniz: ");
    scanf ("%d", &n);
    a = 2;
    while (a < n) {
        if ((n % a) == 0) {
            printf ("Asal değildir: %d\n", n);
            break;
        }
        ++ a;
    }
    if (n == a) {
        printf ("Asal sayıdır: %d\n", n);
    }
    return 0;
}
