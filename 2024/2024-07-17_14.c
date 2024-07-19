/*
Kullanıcıdan alınan sayının asal olup olmadığını bulan program.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b;
    scanf ("%d%*c", &a);
    if (a == 1 || a == 0 || a < 0) {
        printf ("NOT PRIME\n");
    }
    else if (a == 2) {
        printf ("PRIME\n");
    }
    else {
        for (b = 2; b < a; ++ b) {
            if ((a % b) == 0) {
                printf ("NOT PRIME\n");
                break;
            }
        }
        if (b == a) {
            printf ("PRIME\n");
        }
    }
    return EXIT_SUCCESS;
}
