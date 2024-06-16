#include <stdio.h>


main () {
    int a = 5;
    int b = 10;
    while (a < b) {
        printf ("a = %d\n", a);
        a = a + 1;
    }
    int k = 2;
    int me = 20;
    while (k < me) {
        printf ("k = %d\n", k);
        k = k + 2;
    }
}
/*

    int n;
    n = 5 * 3;
    n = n * 20;
    printf ("n nenin değeri = %d\n", n);


    if (n > 40) {
        printf ("n kırktan büyüktür");
    }
    else {
        printf ("n kırktan küçüktür");
    }

    int k = 15;
    k = k + 13;
    k = k * 2;
    if (k < 20) {
        printf ("\nk yirmiden küçük");
    }
    else {
        printf ("\nk 20 den büyük");
    }
*/