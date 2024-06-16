
#include <stdio.h>
int main () {
    int a;
    printf ("Kaça kadar yazdırayım? ");
    scanf ("%d", &a);
    int b;
    b = 1;
    while (a > b) {
        printf ("%d ", b);
        b = b + 1;
    }
    return 0;
}
