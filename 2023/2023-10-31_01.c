
#include <stdio.h>
int main () {
    int a;
    printf ("Lütfen bir sayı giriniz: ");
    scanf ("%d", &a);
    if (a > 0) {
        printf ("a sayısı pozitiftir.\n");
    }
    else if (a < 0) {
        printf ("a sayısı negatiftir.\n");
    }
    else {
        printf ("a sayısı 0'a eşittir.\n");
    }
    return 0;
}
