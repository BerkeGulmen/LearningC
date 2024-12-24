/*
X%2 = 1, X%3 = 2, X%4 = 3, X%5 = 4, X%6 = 5 , X%7 = 0 ise 1'den büyük en küçük X sayısını bulunuz. (Sayı 150'den küçüktür.)
(119)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int b;
    for (b = 0; b <= 150; ++ b) {
        if ((b % 2 == 1) && (b % 3 == 2) && (b % 4 == 3) && (b % 5 == 4) && (b % 6 == 5) && (b % 7 == 0)) {
            printf ("%d\n", b);
        }
    }
    return EXIT_SUCCESS;
}
