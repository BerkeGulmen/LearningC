/*
Kullanıcıdan alınan sayının palindromic numara olup olmadığını yaz. (9527259, 60133106, 4021204...)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c, e;
    int * d;
    scanf ("%d%*c", &a);
    c = a;
    for (b = 1; ; ++ b) {
        if (a < 10) {
            break;
        }
        a /= 10;
    }
    d = (int *) calloc (b, sizeof (int));
    a = c;
    for (c = 0; ; ++ c) {
        * (d + c) = (a % 10);
        a /= 10;
        if (a < 10) {
            * (d + c + 1) = (a % 10);
            break;
        }
    }
    for (c = 0, e = 0; c < (b / 2); ++ c) {
        if (* (d + c) != * (d + (b - c - 1))) {
            e = 1;
            break;
        }
    }
    if (e == 0) {
        printf ("Palindromic number.\n");
    }
    if (e == 1) {
        printf ("NOT Palindromic number.\n");
    }
    return EXIT_SUCCESS;
}
