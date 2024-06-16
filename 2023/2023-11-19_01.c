#include <stdio.h>
#define PI 3.14
// define anahtar sözcügü header (.h dosyalarinin altinda) tanimlanir
// burda tanimlanan PI sabitinin (constant) degeri asla degisemez
// Constant tanimlarken int, double, char... yazmiyoruz
int main (void) {
    double a, b, alan = 0, cap, yaricap, pi;
    int secim;
    const int sabit = 5; //constant tanimlamanin diger yolu
    printf ("kare için 1, dikdörtgen için 2'ye daire için 3'e basiniz: \n");
    scanf ("%d", &secim);
    if (secim == 1) {
        printf ("karenin kenarini girin\n");
        scanf ("%lf", &a);
        alan = a * a;
    }
    else if (secim == 2) {
        printf ("dikdörtgenin kenarini girin\n");
        scanf ("%lf", &a);
        printf ("dikdörtgenin diger kenarini giriniz\n");
        scanf ("%lf", &b);
        alan = a * b;
    }
    else if (secim == 3) {
        printf ("Dairenin capini giriniz\n");
        scanf ("%lf", &cap);
        yaricap = cap / 2;
        alan = yaricap * yaricap * PI;
        //dairenin alan yarn çapin karesinin PI ile çarpimina esit
    }
    else {
        printf ("Yanlis seçim yaptiniz\n");
    }
    printf ("%.3lf", alan);
    return 0;
}
