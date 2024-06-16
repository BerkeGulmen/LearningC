#include <stdio.h>


main () {
    int k;
    k = 2 + 2;
    k = k + 5;
    k = k - 7;
    printf ("k değişkeninin değeri = %d\n", k);
    int n;
    n = 5 * 3;
    n = n * 2;
    printf ("n nenin değeri = %d\n", n);
    unsigned long long kalem;
    kalem = 183469183598724878;
    kalem = kalem + 209485723495783958;
    printf ("kalemin değeri = %llu\n", kalem);
    if (k < 50) {
        printf ("Elliden küçüktü");
    }
    else {
        printf ("Elliden küçük değil");
    }
}
