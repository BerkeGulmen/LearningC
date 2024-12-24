#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f;
    scanf ("%d%*c", &a);
    for (e = 0; e < a; ++ e) {
        scanf ("%d %d %d", &b, &c, &d);
        for (f = 0; f < 5; ++ f) {
            if (b < c && b < d) {
                ++ b;
                continue;
            }
            if (d < c && d < b) {
                ++ d;
                continue;
            }
            if (c < b && c < d) {
                ++ c;
                continue;
            }
            if (b == c) {
                ++ b;
                continue;
            }
            if (c == d) {
                ++ c;
                continue;
            }
            if (b == c && c == d) {
                ++ b;
                continue;
            }
        }
        printf ("%d\n", b * c * d);
    }
    return EXIT_SUCCESS;
}
