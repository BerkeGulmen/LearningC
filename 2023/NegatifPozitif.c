#include <stdio.h>
int main () {
    int sayi;
    sayi = 10;
    if (sayi < 0) {
        printf ("sayi negatif");
    }
    else if (sayi == 0) {
        printf ("sayi 0 a eşit");
    }
    else {
        printf ("sayi pozitif");
    }
    return 0;
}