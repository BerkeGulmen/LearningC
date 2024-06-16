#include <stdio.h>
int main (void) {
    int a;
    int b;
    printf ("a değişkenine sayı veriniz: ");
    scanf ("%d", &a);
    printf ("b değişkenine sayı veriniz: ");
    scanf ("%d", &b);
    if (a > b) {
        printf ("a b'den büyüktür.");
    }
    else if (b > a) {
        printf ("b a'dan büyüktür.");
    }
    else {
        printf ("İki sayı birbirine eşittir.");
    }
    return 0;
}