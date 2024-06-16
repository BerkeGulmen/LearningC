#include <stdio.h>
int main (void) {
    int a, b, c;
    printf ("Sayı gir a: ");
    scanf ("%d", &a);
    printf ("Sayı gir b: ");
    scanf ("%d", &b);
    c = a;
    a = b;
    b = c;
    printf ("a'nın değeri: %d", a);
    printf ("b'nin değeri: %d", b);
    return 0;
}
