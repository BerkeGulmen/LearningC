#include <stdio.h>
int main (void) {
    int a;
    int b;
    int c;
    int degisiklik;
    printf ("a değişkeni için sayı giriniz: ");
    scanf ("%d", &a);
    printf ("b değişkeni için sayı giriniz: ");
    scanf ("%d", &b);
    printf ("c değişkeni için sayı giriniz: ");
    scanf ("%d", &c);
    degisiklik = a;
    a = b;
    b = degisiklik;
    degisiklik = b;
    b = c;
    c = degisiklik;
    printf ("a değişkeninin yeni değeri: %d\n", a);
    printf ("b değişkeninin yeni değeri: %d\n", b);
    printf ("c değişkeninin yeni değeri: %d\n", c);
    return 0;
}
