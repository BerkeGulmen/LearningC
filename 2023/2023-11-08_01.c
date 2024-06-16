#include <stdio.h>
int main (void) {
    int a;
    printf ("Bir sayı giriniz: ");
    scanf ("%d", &a);
    if (a > 0) {
        printf ("Pozitiftir.\n");
    }
    else if (a < 0) {
        printf ("Negatiftir.\n");
    }
    else {
        printf ("0'a eşittir.\n");
    }
    return 0;
}
