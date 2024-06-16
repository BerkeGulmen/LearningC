#include <stdio.h>
int main (void) {
    int a;
    printf ("Lütfen sayı giriniz: ");
    scanf ("%d", &a);
    while (a != 0) {
        printf ("Girdiğiniz sayının 2 katının sonucu: %d\n", a * 2);
        printf ("Tekrar sayı giriniz: ");
        scanf ("%d", &a);
    }
    return 0;
}
