#include <stdio.h>
int main (void) {
    int a, b, c;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    printf ("3. sayıyı gir: ");
    scanf ("%d", &c);
    if (a < b && a < c) {
        printf ("En küçük sayı a: %d\n", a);
    }
    else if (b < a && b < c) {
        printf ("En küçük sayı b: %d\n", b);
    }
    else {
        printf ("En küçük sayı c: %d\n", c);
    }
    return 0;
}
