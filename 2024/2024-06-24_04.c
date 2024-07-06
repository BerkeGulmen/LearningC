/*
Let user to input two integer as "int int"
What is sum of the all integers between the inputs?
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv, char ** envp) {
    int a, b, c, d;
    scanf ("%d %d%*c", &a, &b);
    for (c = a + 1, d = 0; c < b; ++ c) {
        d += c;
    }
    printf ("%d\n", d);
    return EXIT_SUCCESS;
}
