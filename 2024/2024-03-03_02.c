/*
1 boyutlu dizide sıralama küçükten büyüğe 2. algoritma.
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    e = 1;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı giriniz: ", c);
        scanf ("%d", &b [c]);
    }
    while (e == 1) {
        e = 0;
        for (c = 0; c < a - 1; ++ c) {
            if (b [c + 1] < b [c]) {
                d = b [c + 1];
                b [c + 1] = b [c];
                b [c] = d;
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
