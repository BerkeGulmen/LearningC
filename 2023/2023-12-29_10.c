#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, buyuk, kucuk;
    printf ("Birinci sayıyı girin: ");
    scanf ("%d", &a);
    printf ("İkinci sayıyı girin: ");
    scanf ("%d", &b);
    kucuk = ((b > a) ? a : b);
    buyuk = ((b > a) ? b : a);
    for (c = kucuk; ((c < buyuk) && (c > kucuk)); ++ c) {
        printf ("%d\n", c);
    }
    return EXIT_SUCCESS;
}
