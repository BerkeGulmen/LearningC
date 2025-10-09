//Sort.
#include <stdio.h>
#include <stdlib.h>
struct z {
    int a;
};

int main (int argc, char * * argv, char * * envp) {
    struct z * a;
    int b, c, d, e, f;
    scanf ("%d%*c", &b);
    a = (struct z *) calloc (b, sizeof (struct z));
    for (c = 0; c < b; ++ c) {
        scanf ("%d%*c", &(a + c) -> a);
    }
    for (c = 0, e = 0; c < (b - 1); ++ c) {
        for (d = c + 1, f = 0; d < b; ++ d) {
            if ((a + c) -> a > (a + d) -> a) {
                e = 1;
                f = (a + c) -> a;
                (a + c) -> a = (a + d) -> a;
                (a + d) -> a = f;
            }
        }
        if (e == 0) {
            break;
        }
    }
    for (c = 0; c < b; ++ c) {
        printf ("%d. Value: %d\n", c, (a + c) -> a);
    }
    free (a);
    return EXIT_SUCCESS;
}
