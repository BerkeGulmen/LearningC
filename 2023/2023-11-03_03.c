#include <stdio.h>
int main (void) {
    int not1;
    int not2;
    int ortalama;
    printf ("Lütfen not1'i giriniz: ");
    scanf ("%d", &not1);
    printf ("Lütfen not2'i giriniz: ");
    scanf ("%d", &not2);
    if (not1 + not2 > 50) {
        printf ("Sinavi gectiniz.\n");
    }
    else {
        printf ("Sinavdan kaldiniz.\n");
    }
    printf ("sinav ortalamasi: %d\n", (not1 + not2) / 2);
    return 0;
}
