#include <stdio.h>
int main (int argc, char **argv, char **envp) {
    int a;
    printf ("Bir sayı gir: ");
    scanf ("%d", &a);
    if ((a < 18) || (a > 65)) {
        printf ("İstediğimiz.\n");
    }
    else {
        printf ("İstemediğimiz.\n");
    }
    return 0;
}
