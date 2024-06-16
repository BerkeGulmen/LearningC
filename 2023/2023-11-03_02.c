#include <stdio.h>
int main (void) {
    int a;
    printf ("Kaç faktöriyeli bulmak istiyorsunuz? ");
    scanf ("%d", &a);
    int carpim;
    carpim = 1;
    int b;
    b = 2;
    while (a >= b) {
        carpim = carpim * b;
        b = b + 1;
    }
    printf ("Sonucu bulunmuş faktöriyelin sonucu: %d\n", carpim);
    return 0;
}
