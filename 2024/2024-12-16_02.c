/*
 Kullanıcıdan alınan sayının asal olup olmadığını bulan program.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c = 0;
    scanf ("%d%*c", &a);
    if (a != 2) {
        for (b = 2, c = 0; b < a; ++ b) {
            if ((a % b) == 0) {
                printf ("Not Asal.\n");
                c = 1;
                break;
            }
        }
    }
    if (a != 0 && a != 1) {
        if (c == 0 && a != 2) {
            printf ("Asal.\n");
        }
        if (a == 2) {
            printf ("Asal.\n");
        }
    }
    if (a == 0 || a == 1) {
        printf ("Not Asal.\n");
    }
    return EXIT_SUCCESS;
}
