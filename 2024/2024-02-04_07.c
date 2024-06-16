/*
Kullanıcının girdiği iki sayının aralarında asal olup olmadığına bakar
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c, d, e;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    if (a < b) {
        c = a;
        d = b;
    }
    else {
        c = b;
        d = a;
    }
    for (e = 2; e <= d; ++ e) {
        if ((c % e) == 0 && (d % e) == 0) {
            printf ("Sayılarınız aralarında asal değil: %d\n", e);
            break;
        }
    }
    if (e > d) {
        printf ("Sayılarınız aralarında asaldır\n");
    }
    return EXIT_SUCCESS;
}
