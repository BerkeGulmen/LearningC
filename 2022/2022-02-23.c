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

    int yt;
    for (yt = 11; yt < 15; yt = yt + 1) {
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
    for (berek = 20; berek < 30; berek = berek + 2) {
        printf ("berek = %d\n", berek);
    }

// Kullanıcıdan sayı girmesini istemek ve girilen sayıyı almak
    int sayi;
    printf ("Lütfen bir sayı giriniz:\n");
    scanf ("%d", &sayi);
    printf ("Girilen sayı = %d\n", sayi);


    int inek;
    printf ("Lütfen bir sayı giriniz:\n");
    scanf ("%d", &inek);
    printf ("Girilen sayı = %d\n", 2 * inek);

// Kullanıcının girdiği 2 sayının toplamını ekrana yazdır
    int ab, cb;
    printf ("Lütfen birinci sayıyı giriniz:\n");
    scanf ("%d", &ab);
    printf ("lütfen ikinci sayı giriniz:\n");
    scanf ("%d", &cb);
    printf ("Sonuç = %d\n", cb + ab);

}