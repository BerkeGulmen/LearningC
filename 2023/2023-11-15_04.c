#include <stdio.h>
int main (void) {
    int sayi1 = 10;
    int sayi2 = 15;
    sayi1 = sayi1 + 1;
    sayi1 ++; // sayi1 = sayi1 + 1; demektir ve sayi'nin değerini 1 artırıp kendi üzerine yazar
    sayi1 --; // sayi1 = sayi1 - 1; demektir ve sayi'nin değerini 1 eksiltip kendi üzerine yazar
    sayi1 = 10;
    sayi2 = 15;
    sayi1 = sayi2 ++;
    printf ("sayi1'in değeri: %d\n", sayi1);
    printf ("sayi2'in değeri: %d\n", sayi2);
    sayi1 = 10;
    sayi2 = 15;
    sayi1 = ++ sayi2;
    printf ("sayi1'in değeri: %d\n", sayi1);
    printf ("sayi2'in değeri: %d\n", sayi2);
    sayi1 = 10;
    sayi2 = 15;
    sayi1 = sayi2 --;
    printf ("sayi1'in değeri: %d\n", sayi1);
    printf ("sayi2'in değeri: %d\n", sayi2);
    sayi1 = 10;
    sayi2 = 15;
    sayi1 = -- sayi2;
    printf ("sayi1'in değeri: %d\n", sayi1);
    printf ("sayi2'in değeri: %d\n", sayi2);
    return 0;
}
