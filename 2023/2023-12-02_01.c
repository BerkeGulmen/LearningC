#include <stdio.h>
int main (int argc, char **argv, char **envp) {
    int a;
    int b;
    printf ("1. kullanıcı sayı gir: ");
    scanf ("%d", &a);
    while (a != 0) {
        printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf ("2. kullanıcı sayı tahminde bulun: ");
        scanf ("%d", &b);
        while (a != b) {
            if (a < b) {
                printf ("Daha küçük sayı tahminde bulun: ");
                scanf ("%d", &b);
            }
            else if (a > b) {
                printf ("Daha büyük sayı tahminde bulun: ");
                scanf ("%d", &b);
            }
        }
        printf ("TEBRİKLER BULDUNUZ, eğer oyundan çıkmak istirsanız 0 gir, 1. kullanıcı sayı tahminde bulun: ");
        scanf ("%d", &a);
    }
    return 0;
}
