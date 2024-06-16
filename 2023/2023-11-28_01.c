#include <stdio.h>
int main (int argc, char **argv, char **envp) {
    int a;
    printf ("Bir sayı gir: ");
    scanf ("%d", &a);
    if ((a < 65) && (a > 18) && (a == 43)) {
        printf ("Girdiğiniz sayı 65 ile 18 arasında ve 43'e eşit olabilir.\n");
    }
    else {
        printf ("Girdiğiniz sayı 65 ile 18 arasında değil.\n");
    }
    return 0;
}
