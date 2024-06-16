/*
 Kullanıcının vereceği sayıya kadar aşağıdaki deseni sürdür. (aşağıda 5 girildiği kabul edilmiştir.)
 *
 **
 ***
 ****
 *****
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c;
    printf ("Sayı gir: ");
    scanf ("%d", &a);
    for (b = 1; b <= a; ++ b) {
        for (c = 0; c < b; ++ c) {
            printf ("*");
        }
        c = 0;
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
