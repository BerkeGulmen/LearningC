#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    e = 1;
    printf ("Kaç elemanlı? ");
    scanf ("%d", &a);
    int b [a];
    for (c = 0; c < a; ++ c) {
        printf ("%d. elemanı gir: ", c);
        scanf ("%d", &b [c]);
    }
    while (e == 1) {
        e = 0;
        for (c = 0; c < a; ++ c) {
            for (d = 0; (c + 1) < a; ++ c) {
                if (b [c + 1] < b [c]) {
                    d = b [c + 1];
                    b [c + 1] = b [c];
                    b [c] = d;
                    e = 1;
                }
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
