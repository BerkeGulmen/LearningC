#include <stdio.h>
#include <stdlib.h>

int a (int);
int main (int argc, char **argv, char **envp) {
    int s;
    printf ("Hangi sayı? ");
    scanf ("%d", &s);
    if (a (s) == 0) {
        printf ("asal yes\n");
    }
    if (a (s) == 1) {
        printf ("asal no\n");
    }
    return EXIT_SUCCESS;
}
int a (int b) {
    int c;
    for (c = 2; c < b; ++ c) {
        if ((b % c) == 0) {
            return 1;
            break;
        }
    }
    if (c == b) {
        return 0;
    }
    return 0;
}
