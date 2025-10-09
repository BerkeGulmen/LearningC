//This program is doing students name, surname and age.
#include <stdio.h>
#include <stdlib.h>

struct z {
    char a [10];
    char b [10];
    int c;
};
int main (int argc, char * * argv, char * * envp) {
    struct z p;
    printf ("Adinizi giriniz:");
    scanf ("%s", p.a);
    printf ("Soyadinizi giriniz:");
    scanf ("%s", p.b);
    printf ("Yasinizi giriniz:");
    scanf ("%d%*c", &p.c);
    printf ("Sirasiyla Adiniz, Soyadiniz Yasiniz\n %s\n %s\n %d\n", p.a, p.b, p.c);
    return EXIT_SUCCESS;
}
