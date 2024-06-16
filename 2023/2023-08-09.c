#include <stdio.h>

int main (void) {
    int al;
    al = 8;
    if (al == 7) {
        al = al * 2;
        printf ("Değişkeni 2 ile çarptı. \n");
    }
    else if (al > 7) {
        printf ("Değişkenimiz yediden büyükmüş.\n");
    }
    else if (al < 7) {
        printf ("Değişkenimiz yediden küçükmüş.\n");
    }
    else {
        printf ("Yukardakilerden birisi çalıştırılmamışsa.\n");
    }
    return 0;
}
