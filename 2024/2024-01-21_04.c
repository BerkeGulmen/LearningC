/*
 Kullanıcının vereceği sayıya göre aşağıdaki deseni oluştur: (aşağıdaki örnekte kullanıcının 6 girdiği kabul edilmiştir.)
 ******
 *****
 ****
 ***
 **
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (b = 0, c = 0, d = 0; b < a; ++ b) {
        for (; c < a; ++ c) {
            printf ("*");
        }
        printf ("\n");
        ++ d;
        c = d;
    }
    return EXIT_SUCCESS;
}
