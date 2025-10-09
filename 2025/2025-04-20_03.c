#include <stdio.h>
#include <stdlib.h>
struct z {
    int a;
};

int main (int argc, char * * argv, char * * envp) {
    struct z * a;
    int b, c;
    scanf ("%d%*c", &b);
    a = (struct z *) calloc (b, sizeof (struct z));
    for (c = 0; c < b; ++ c) {
        scanf ("%d%*c", &(a + c) -> a);
    }
    for (c = 0; c < b; ++ c) {
        printf ("%d. Variable: %d\n", c, (a + c) -> a);
    }
    return EXIT_SUCCESS;
}
