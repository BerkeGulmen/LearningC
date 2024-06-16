#include <stdio.h>
int main (void) {
    int toplam = 10;
    float ortalama;
    ortalama = toplam / 2;
    printf ("%.2f\n", ortalama);
    ortalama = (float) toplam / 4;
    printf ("%.2f\n", ortalama);
    return 0;
}
