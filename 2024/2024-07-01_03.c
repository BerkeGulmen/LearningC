#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * (* argv), char * (* envp)) {
    int a, b, c;
    scanf ("%d %d%*c", &a, &b);
    c = a * b;
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
