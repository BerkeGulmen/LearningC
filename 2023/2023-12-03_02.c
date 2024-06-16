#include <stdio.h>
int main (void) {
    int a;
    int b;
    int c;
    int degisiklik;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    printf ("Sayı gir: ");
    scanf ("%d", &b);
    printf ("Sayı gir: ");
    scanf ("%d", &c);
    degisiklik = a;
    a = b;
    b = c;
    c = degisiklik;
    printf ("a değişkenin yeni değeri: %d\n", a);
    printf ("b değişkenin yeni değeri: %d\n", b);
    printf ("c değişkenin yeni değeri: %d\n", c);
    return 0;
}
