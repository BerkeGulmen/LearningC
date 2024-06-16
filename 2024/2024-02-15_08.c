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
    for (b = a, d = 1; d <= a; ++ d, -- b) {
        for (c = 1; c <= b; ++ c) {
            printf ("*");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
