/*
 X%2 = 1, X%3 = 2, X%4 = 3, X%5 = 4, X%6 = 5 , X%7 = 0 ise 1'den büyük en küçük X sayısını bulunuz. (Sayı 150'den küçüktür.)
 (119)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a;
    for (a = 1; a < 150; ++ a) {
        if ((a % 2) == 1 && (a % 3) == 2 && (a % 4) == 3 && (a % 5) == 4 && (a % 6) == 5 && (a % 7) == 0) {
            printf ("Sonuç: %d\n", a);
            break;
        }
    }
    return EXIT_SUCCESS;
}
