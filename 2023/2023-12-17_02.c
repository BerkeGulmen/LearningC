#include <stdio.h>
int main (void) {
    int a, b, c;
    printf ("a'nın değerini gir: ");
    scanf ("%d", &a);
    printf ("b'nin değerini gir: ");
    scanf ("%d", &b);
    printf ("c'nin değerini gir: ");
    scanf ("%d", &c);
    if ((a > b) && (a > c)) {
        printf ("a en büyüktür: %d\n", a);
    }
    else if ((b > a) && (b > c)) {
        printf ("b en büyüktür: %d\n", b);
    }
    else {
        printf ("c en büyüktür: %d\n", c);
    }
    return 0;
}
