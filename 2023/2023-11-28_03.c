#include <stdio.h>
int main (int argc, char **argv, char **envp) {
    int a;
    printf ("Bir sayı gir: ");
    scanf ("%d", &a);
    switch (a) {
        case 50:
            printf ("Girdiğiniz sayı 50.\n");
            break;
        case 75:
            printf ("Girdiğiniz sayı 75.\n");
            break;
        default:
            printf ("Hiçbiri değil.\n");
    }
    return 0;
}
