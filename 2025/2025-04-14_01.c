//This program is doing struct example.
#include <stdio.h>
#include <stdlib.h>
struct z {
    int a;
    int b;
    double c;
};
int main (int argc, char * * argv, char * * envp) {
    struct z p;
    printf ("Okul numaranizi giriniz.");
    scanf ("%d%*c", &p.a);
    printf ("Boyunuzu giriniz.");
    scanf ("%d%*c", &p.b);
    printf ("Kilonuzu giriniz.");
    scanf ("%lf%*c", &p.c);
    printf ("Okul numaraniz: %d\n Boyunuz: %d\n Kilonuz: %lf\n ", p.a, p.b, p.c);
    return EXIT_SUCCESS;
}
