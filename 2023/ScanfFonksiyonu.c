#include <stdio.h>
int main () {
    int a = 0;
    printf ("bir sayi giriniz: \n");
    scanf ("%d", &a);
    printf ("Girdiginiz sayi : %d\n", a);
    printf ("Girdiginiz sayinin 2 kati %d\n", a * 2);
    printf ("Girdiginiz sayinin 5 fazlasinin 2 katinin 3 eksiği %d", ((a + 5) * 2) - 3);
    return 0;
}