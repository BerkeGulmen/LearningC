#include <stdio.h>
int main (void) {
    int a;
    int b;
    int carpim;
    printf ("Kaça kadar sayıların çarpımının sonucunu bulmamı istersiniz? ");
    scanf ("%d", &a);
    carpim = 1;
    b = 2;
    while (a >= b) {
        carpim = carpim * b;
        b = b + 1;
    }
    printf ("Bulunmuş faktöriyelin sonucu: %d\n", carpim);
    return 0;
}
