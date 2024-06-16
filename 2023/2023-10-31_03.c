
#include <stdio.h>
int main (void) {
    int a;
    int b;
    int c;
    printf ("Lütfen a'yı giriniz: ");
    scanf ("%d", &a);
    printf ("Lütfen b'yi giriniz: ");
    scanf ("%d", &b);
    printf ("Lütfen c'yi giriniz: ");
    scanf ("%d", &c);
    if (a > b) {
        if (a > c) {
            printf ("En büyük sayı: %d\n", a);
            if (b > c) {
                printf ("Ortanca sayı: %d\n", b);
                printf ("En küçük sayı: %d\n", c);
            }
            else {
                printf ("Ortanca sayı: %d\n", c);
                printf ("En küçük sayı: %d\n", b);
            }
        }
        else {
            printf ("En büyük sayı: %d\n", c);
            printf ("Ortanca sayı: %d\n", a);
            printf ("En küçük sayı: %d\n", b);
        }
    }
    else if (a > c) {
        printf ("En büyük sayı: %d\n", b);
        printf ("Ortanca sayı: %d\n", a);
        printf ("En küçük sayı: %d\n", c);
    }
    else {
        if (c > b) {
            printf ("En büyük sayı: %d\n", c);
            printf ("Ortanca sayı: %d\n", b);
            printf ("En küçük sayı: %d\n", a);
        }
        else {
            printf ("En büyük sayı: %d\n", b);
            printf ("Ortanca sayı: %d\n", c);
            printf ("En küçük sayı: %d\n", a);
        }
    }
    return 0;
}
