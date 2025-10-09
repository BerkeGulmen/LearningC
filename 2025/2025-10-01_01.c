/*
1’den 1.000’e kadar olan sayılar içinde, n ve n+1 sayılarının OBEB’i 1’den büyük olan kaç n vardır?
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    for (a = 1, c = 0; a <= 1000; ++ a) {
        for (b = 2; b < a; ++ b) {
            if (a / b == 0 && (a + 1) / b == 0) {
                ++ c;
            }
        }
    }
    printf ("%d\n", c);
    return EXIT_SUCCESS;
}
