/*
dizilerde sıralama (kendi bulduğum algoritma).
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    e = 1;
    printf ("Kaç elemanlı dizi? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı gir: ", c);
        scanf ("%d", &b [c]);
    }
    while (e == 1) {
        e = 0;
        for (c = 0; c < a - 1; ++ c) {
            if (b [c] > b [c + 1]) {
                d = b [c];
                b [c] = b [c + 1];
                b [c + 1] = d;
                e = 1;
            }
        }
    }
    printf ("Küçükten büyüğe doğru sıralanışı: ");
    for (c = 0; c < a; ++ c) {
        printf ("%d ", b [c]);
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
