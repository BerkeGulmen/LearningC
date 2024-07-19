/*
Kullanıcının vereceği sayıya göre aşağıdaki deseni oluştur: (aşağıdaki örnekte kullanıcının 6 girdiği kabul edilmiştir.)
******
*****
****
***
**
*
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d%*c", &a);
    for (b = 0; b < a; ++ b) {
        for (c = a; c > b; -- c) {
            printf ("*");
        }
        printf ("\n");
    }
    return EXIT_SUCCESS;
}
