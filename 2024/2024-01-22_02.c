/*
X%2 = 1, X%3 = 2, X%4 = 3, X%5 = 4, X%6 = 5 , X%7 = 0 ise 1'den büyük en küçük X sayısını bulunuz. (Sayı 150'den küçüktür.)
(119)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int c;
    for (c = 1; c < 150; ++ c) {
        if ((c % 2) == 1 && (c % 3) == 2 && (c % 4) == 3 && (c % 5) == 4 && (c % 6) == 5 && (c % 7) == 0) {
            printf ("Kolaydı: %d\n", c);
            break;
        }
    }
    return EXIT_SUCCESS;
}
