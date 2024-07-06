/*
Check the input, prime or not?
Input: "int"
Output: "prime" or "not prime"
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv, char ** envp) {
    int a, b = 0;
    printf ("Gir: ");
    scanf ("%d", &a);
    if (a == 2) {
        printf ("Prime\n");
    }
    else if (a == 1) {
        printf ("Not prime\n");
    }
    else if (a > 2) {
        for (b = 2; b < a; ++ b) {
            if ((a % b) == 0) {
                printf ("Not prime\n");
                break;
            }
        }
    }
    if (b == a) {
        printf ("Prime\n");
    }
    return EXIT_SUCCESS;
}
