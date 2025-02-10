/*
Kullanıcıdan alınan sayının asal olup olmadığını bulan program.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 2, c = 0; b < a; ++ b) {
        if ((a % b) == 0) {
            c = 1;
            printf ("Not asal number.\n");
            break;
        }
    }
    if (c == 0) {
        printf ("Asal number.\n");
    }
    return EXIT_SUCCESS;
}
