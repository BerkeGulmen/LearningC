#include <stdio.h>
int main (void) {
    int a;
    int b;
    int degisiklik;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    printf ("Sayı gir: ");
    scanf ("%d", &b);
    degisiklik = a;
    a = b;
    b = degisiklik;
    printf ("a değişkenin değeri: %d\n", a);
    printf ("b değişkenin değeri: %d\n", b);
    return 0;
}
