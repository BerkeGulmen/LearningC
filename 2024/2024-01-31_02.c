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
    int a, b, c, d, e;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (b = a, c = 0, d = 1, e = 1; a >= e; ++ e) {
        for (; c <= b; ++ c) {
            printf ("*");
        }
        ++ d;
        c = d;
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
