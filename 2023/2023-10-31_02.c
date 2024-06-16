
#include <stdio.h>
int main () {
    int sayı1;
    int sayı2;
    printf ("Lütfen sayı1'i giriniz: ");
    scanf ("%d", &sayı1);
    printf ("Lütfen sayı2'yi giriniz: ");
    scanf ("%d", &sayı2);
    if (sayı1 < sayı2) {
        printf ("sayı2 daha büyüktür.\n");
    }
    else if (sayı1 > sayı2) {
        printf ("sayı1 daha büyüktür.\n");
    }
    else {
        printf ("iki sayı da birbirine eşittir.\n");
    }
    return 0;
}
