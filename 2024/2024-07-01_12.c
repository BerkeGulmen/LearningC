/*
 Kullanıcıdan alınan sayının asal olup olmadığını bulan program.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * (* argv), char * (* envp)) {
    int a = 0, b = 0;
    scanf ("%d%*c", &a);
    if (a == 1) {
        printf ("Not prime.\n");
    }
    if (a == 0) {
        printf ("Not prime.\n");
    }
    if (a == 2) {
        printf ("Prime.\n");
    }
    if (a != 1 && a != 2 && a != 0) {
        for (b = 2; b < a; ++ b) {
            if ((a % b) == 0) {
                printf ("Not prime.\n");
                break;
            }
        }
    }
    if (b == a) {
        printf ("Prime.\n");
    }
    return EXIT_SUCCESS;
}
