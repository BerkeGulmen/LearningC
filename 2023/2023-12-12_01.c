#include <stdio.h>
int main (void) {
    int a, b, degisiklik;
    printf ("1. sayıyı girin ");
    scanf ("%d", &a);
    printf ("2. sayıyı girin ");
    scanf ("%d", &b);
    degisiklik = a;
    a = b;
    b = degisiklik;
    printf ("a'nın yeni değeri: %d\n", a);
    printf ("b'nin yeni değeri: %d\n", b);
    return 0;
}
