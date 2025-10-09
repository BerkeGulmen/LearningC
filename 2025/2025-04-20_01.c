//Simple Struct.
#include <stdio.h>
#include <stdlib.h>
struct z {
    int a;
};

int main (int argc, char * * argv, char * * envp) {
    struct z b;
    scanf ("%d%*c", &b.a);
    printf ("Value: %d\n", b.a);
    return EXIT_SUCCESS;
}
