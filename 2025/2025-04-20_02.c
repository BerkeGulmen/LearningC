//Simple Struct Pointer.
#include <stdio.h>
#include <stdlib.h>
struct z {
    int a;
};

int main (int argc, char * * argv, char * * envp) {
    int * b;
    b = (int *) calloc (10, sizeof (int));
    struct z * a;
    a = (struct z *) calloc (10, sizeof (struct z));
    free (b);
    free (a);
    return EXIT_SUCCESS;
}
