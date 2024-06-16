#include <stdio.h>
int main (void) {
    int a;
    int b;
    int c;
    printf ("a değişkenine sayı giriniz:");
    scanf ("%d", &a);
    printf ("b değişkenine sayı giriniz:");
    scanf ("%d", &b);
    printf ("c değişkenine sayı giriniz:");
    scanf ("%d", &c);
    if (a > b) {
        if (b > c) {
            printf ("a değişkeni en büyüktür ve değeri: %d\n", a);
            printf ("b değişkeni ortancadır ve değeri: %d\n", b);
            printf ("c değişkeni en küçüktür ve değeri:%d\n", c);
        }
        else if (a > c) {
            printf ("a değişkeni en büyüktür ve değeri: %d\n", a);
            printf ("c değişkeni ortancadır ve değeri: %d\n", c);
            printf ("b değişkeni en küçüktür ve değeri: %d\n", b);
        }
        
        else {
            printf ("c değişkeni en büyüktür ve değeri: %d\n", c);
            printf ("a değişkeni ortancadır ve değeri: %d\n", a);
            printf ("b değişkeni en küçüktür ve değeri: %d\n", b);
        }
    }
    else if (a > c) {
        printf ("b değişkeni en büyüktür ve değeri: %d\n", b);
        printf ("a değişkeni ortancadır ve değeri: %d\n", a);
        printf ("c değişkeni en küçüktür ve değeri: %d\n", c);
    }
    else  if (b > c) {
        printf ("b değişkeni en büyüktür ve değeri: %d\n", b);
        printf ("c değişkeni ortancadır ve değeri: %d\n", c);
        printf ("a değişkeni en küçüktür ve değeri: %d\n", a);
    }
    else {
        printf ("c değişkeni en büyüktür ve değeri: %d\n", c);
        printf ("b değişkeni ortancadır ve değeri: %d\n", b);
        printf ("a değişkeni en küçüktür ve değeri: %d\n", a);
    }
    return 0;
}
