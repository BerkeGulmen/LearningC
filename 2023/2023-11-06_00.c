#include <stdio.h>
int main (void) {
    int not1;
    int not2;
    int ortalama;
    printf ("Lütfen not1'i giriniz. ");
    scanf ("%d", &not1);
    printf ("Lütfen not2'yi giriniz. ");
    scanf ("%d", &not2);
    if ((not1 + not2) / 2 < 50) {
        printf ("Ortalamanız 50'den küçüktür.");
    }
    else if ((not1 + not2) / 2 < 70) {
        printf ("Ortalamanız 70'den küçüktür.");
    }
    else if ((not1 + not2) / 2 < 90) {
        printf ("Ortalamanız 90'dan küçüktür.");
    }
    else if((not1 + not2) / 2 <= 100) {
        printf ("Ortalamanız 100'e eşit veya 100'den küçüktür.");
    }
    else {
        printf ("Hatalıdır.");
    }
    return 0;
}
