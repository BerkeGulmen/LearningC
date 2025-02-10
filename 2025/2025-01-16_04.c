/*
Kullanıcıdan alınan sayıya kadar tam olarak bölünebilen en küçük sayıyı yaz. (10 için 2520)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 2, c = 1; b <= a; ++ b) {
        if ((a % b) == 0) {
            c = b;
        }
        else {
            break;
        }
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
