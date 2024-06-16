#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, c, d, e;
    printf ("Kaç elemanlı pointer dizi? ");
    scanf ("%d", &a);
    int v [a];
    for (c = 0; c < a; ++ c) {
        printf ("b pointer dizisinin %d. elemanını gir: \n", c);
        scanf ("%d", &v [c]);
    }
    //Normalde aşağıdaki gibi yer açardık.
    //b = (int *) calloc (a , sizeof (int));
    //Fakat scanf ile kullanamıyoruz o yüzden, diziyi pointer'a veriyoruz.
    int *b = v;
    for (c = 0; c < a; ++ c) {
        printf ("b pointer dizisinin %d. elemanının değeri: %d\n", c, * (b + c));
    }
    //Normalde aşağıdaki gibi yok ediyorduk.
    //free (b);
    //Fakat diziyle eşleştirdiğimiz için bu şekilde yok edemiyoruz.
    for (c = 0; c < a - 1; ++ c) {
        for (d = c + 1; d < a; ++ d) {
            if (* (b + c) < * (b + d)) {
                e = * (b + c);
                * (b + c) = * (b + d);
                * (b + d) = e;
            }
        }
    }
    
    for (c = 0; c < a; ++ c) {
        printf ("%d ", * (b + c));
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
