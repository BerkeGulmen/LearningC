//İki tane sayımız olsun
//Bu sayıların değerleri 5 ve 10 olsun
//Önce bu iki sayıdaki değerleri birbirlerine aktar
//sonra bu sayıların değerlerini ekrana yazdır
#include <stdio.h>

int main (void) {
    int sayi1;
    int sayi2;
    sayi1 = 5;
    sayi2 = 10;
    int degisiklik;
    degisiklik = sayi2;
    sayi2 = sayi1;
    sayi1 = degisiklik;
    printf ("sayi1'in yeni değeri: %d\n", sayi1);
    printf ("sayi2'nin yeni değeri: %d\n", sayi2);
    return 0;
}
