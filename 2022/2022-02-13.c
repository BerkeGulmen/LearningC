#include <stdio.h>


main () {

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



    int a = 5;
    int b = 10;
    while (a < b) {
        printf ("a = %d\n", a);
        a = a + 1;
    }
    int k2 = 2;
    int me = 20;
    while (k2 < me) {
        printf ("k2 = %d\n", k2);
        k2 = k2 + 2;
    }


    int yt;
    for (yt = 5; yt < 15; yt = yt + 1) {
        printf ("yt = %d\n", yt);
    }

    int satir;
    int sutun;
    satir = 0;
    sutun = 0;
    while (satir < 10) {
        while (sutun < 10) {
            if (satir == sutun) {
                printf ("*");
            }
            else {
                printf (" ");
            }
            sutun = sutun + 1;
        }
        printf ("\n");
        sutun = 0;
        satir = satir + 1;
    }
    satir = 0;
    sutun = 10;
    while (satir < 10) {
        while (sutun > 0) {
            if (satir == sutun - 1) {
                printf ("*");
            }
            else {
                printf (" ");
            }
            sutun = sutun - 1;
        }
        printf ("\n");
        sutun = 10;
        satir = satir + 1;
    }

}