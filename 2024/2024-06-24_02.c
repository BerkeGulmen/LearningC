/*
Find prime numbers between inputs
input: "int int"
output: "int int int..."
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv, char ** envp) {
    int a, b, c, d, e = 0;
    scanf ("%d %d%*c", &a, &b);
    c = a + 1;
    for (d = a; d < b; ++ d, ++ c) {
        for (e = 2; e < c; ++ e) {
            if ((c % e) == 0) {
                break;
            }
        }
        if (c == e) {
            printf ("%d ", c);
        }
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
