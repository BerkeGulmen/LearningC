#include <stdio.h>
int main (void) {
    int a;
    int b;
    int c;
    printf ("Sayı gir a: ");
    scanf ("%d", &a);
    printf ("Sayı gir b: ");
    scanf ("%d", &b);
    printf ("Sayı gir c: ");
    scanf ("%d", &c);
    if (a > b) {
        if (b > c) {
            printf ("a en büyük\n");
        }
        else if (c > b) {
            printf ("a en büyük\n");
        }
        else {
            printf ("c en büyük\n");
        }
    }
    else if (a > c) {
        printf ("b en büyük\n");
    }
    else if (c > b) {
        printf ("c en büyük\n");
    }
    else {
        printf ("b en büyük\n");
    }
    return 0;
}
