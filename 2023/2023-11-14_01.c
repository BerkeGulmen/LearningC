//char türündeki değişkenin tanımlanması
//char türünün kullanımı
//char türü hangi verileri alır (sayıları mı) ?
#include <stdio.h>

int main (void) {
    char Ali = 'a';
    char Veli = 'v'; // geçici değişkendir.
    char b;
    printf ("b değişkeninin ilk değeri: %c\n", b);
    printf ("Ali: %c \t Veli: %c\n", Ali, Veli);// \t 4 boşluk bırakır.
    b = Ali;
    Ali = Veli;
    Veli = b;
    printf ("Ali'nin yeni değeri: %c\n", Ali);
    printf ("Veli'nin yeni değeri: %c\n", Veli);
    printf ("b değişkeninin son değeri: %c\n", b);
    return 0;
}
