//İçi dolu kare.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 0; b < a; ++ b) {
        for (c = 0; c < a; ++ c) {
            printf ("* ");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
