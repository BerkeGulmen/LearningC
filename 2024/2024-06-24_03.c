/*
Find Fibonacci numbers until input
input: "int"
output: "int int int..."
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv, char ** envp) {
    int a, b, c, d;
    scanf ("%d%*c", &d);
    for (a = 1, b = 2; a < d; ) {
        printf ("%d ", a);
        c = b;
        b = a + b;
        a = c;
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
