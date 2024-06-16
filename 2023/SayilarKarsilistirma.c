#include <stdio.h>

int main () {
    int sayi1;
    int sayi2;
    printf ("Lütfen sayi1'i giriniz: ");
    scanf ("%d", &sayi1);
    printf ("Lütfen sayi2'yi giriniz: ");
    scanf ("%d", &sayi2);
    if (sayi1 > sayi2) {
        printf ("sayi1 daha büyüktür.");
    }
    else if (sayi1 < sayi2) {
        printf ("sayi2 daha büyük.");
    }
    else if (sayi1 == sayi2) {
      printf ("sayi1 ve sayi2 eşittir.");
    }
    return 0;
}