#include <stdio.h>
int main (void) {
    int a, b, c;
    printf ("1. sayı gir: ");
    scanf ("%d", &a);
    printf ("2. sayı gir: ");
    scanf ("%d", &b);
    printf ("3. sayı gir: ");
    scanf ("%d", &c);
    if (c < b && c < a) {
        printf ("En küçük sayı c: %d\n", c);
    }
    else if (b > a && a < c) {
        printf ("En küçük sayı a: %d\n", a);
    }
    else {
        printf ("En küçük sayı b: %d\n", b);
    }
    return 0;
}
