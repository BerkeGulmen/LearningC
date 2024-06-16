#include <stdio.h>


main () {

    int n;
    n = 5 * 3;
    n = n * 20;
    printf ("n nenin değeri = %d\n", n);


    if (n > 40) {
        printf ("n kırktan büyüktür\n");
    } else {
        printf ("n kırktan küçüktür\n");
    }

    int a = 5;
    int b = 10;
    while (a < b) {
        printf ("a = %d\n", a);
        a = a + 1;
    }

    int yt;
    for (yt = 5; yt < 15; yt = yt + 1) {
        printf ("yt = %d\n", yt);
    }

// 20'den 30'a kadar çift sayıları ekrana yazdır
    int t = 20;
    while (t < 30) {
        printf ("t = %d\n", t);
        t = t + 2;
    }

// 20'den 30'a kadar çift sayıları for ile ekrana yazdır
    int berek;
    for (berek = 22; berek < 30; berek = berek + 2) {
        printf ("berek = %d\n", berek);
    }

}