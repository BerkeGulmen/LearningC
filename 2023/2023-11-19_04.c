#include <stdio.h>
int main (void) {
    int a;
    int b;
    int c;
    printf ("a değişkenine sayı gir: ");
    scanf ("%d", &a);
    printf ("b değişkenine sayı gir: ");
    scanf ("%d", &b);
    printf ("c değişkenine sayı gir: ");
    scanf ("%d", &c);
    if (a > b) {
        if (b > c) {
            printf ("a en büyük ve değeri: %d\n", a);
            printf ("b ortanca ve değeri: %d\n", b);
            printf ("c en küçük ve değeri: %d\n", c);
        }
        else if (a > c) {
            printf ("a en büyük ve değeri: %d\n", a);
            printf ("c ortanca ve değeri: %d\n", c);
            printf ("b en küçük ve değeri: %d\n", b);
            else {
                printf ("c en büyük ve değeri: %d\n", c);
                printf ("a ortanca ve değeri: %d\n", a);
                printf ("b en küçük ve değeri: %d\n", b);
            }
        }
        else if (a > c) {
            printf ("b en büyük ve değeri: %d\n", b);
            printf ("a ortanca ve değeri: %d\n", a);
            printf ("c en küçük ve değeri: %d\n", c);
        }
        else if (b > c) {
            printf ("b en büyük ve değeri: %d\n", b);
            printf ("c ortanca ve değeri: %d\n", c);
            printf ("a en küçük ve değeri: %d\n", a);
        }
        else {
            printf ("c en büyük ve değeri: %d\n", c);
            printf ("b ortanca ve değeri: %d\n", b);
            printf ("a en küçük ve değeri: %d\n", a);
        }
    }
    return 0;
}
