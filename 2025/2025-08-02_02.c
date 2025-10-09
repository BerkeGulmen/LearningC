/*
 Bir öğrenci yönetim sistemi yazın. Program şunları yapmalı:

 Struct kullanarak öğrenci bilgilerini saklayın:

 İsim (char array)
 Öğrenci numarası (int)
 3 ders notu (float array)
 Ortalama (float)


 Dinamik dizi oluşturun ve kullanıcıdan kaç öğrenci kaydedeceğini alın
 Fonksiyonlar yazın:

 veriGirisi() - Öğrenci bilgilerini alan fonksiyon
 ortalamaHesapla() - Her öğrencinin ortalamasını hesaplayan fonksiyon
 enYuksekOrtalama() - En yüksek ortalamaya sahip öğrenciyi bulan fonksiyon
 basariliOgrenciler() - Ortalaması 70+ olan öğrencileri listeleyen fonksiyon


 Pointer arithmetic kullanarak dizide gezinin
 Sıralama yapın: Öğrencileri ortalamalarına göre büyükten küçüğe sıralayın
 Sonuçları düzgün formatta yazdırın


 Örnek çıktı:

 === EN YÜKSEK ORTALAMA ===
 Ahmet (12345) - Ortalama: 88.33

 === BAŞARILI ÖĞRENCİLER (70+) ===
 1. Ahmet (12345) - 88.33
 2. Zeynep (54321) - 75.67
 */
#include <stdio.h>
#include <stdlib.h>
struct z {
    int a; //ogrenci numarasi
    double * b;//ders notu
    double c;//ortalama
    char * d;//isim
};
int main (int argc, char * * argv, char * * envp) {
    int a, c, d, f;
    double e = 0.0;
    printf ("Kaç öğrenci gireceksiniz?\n");
    scanf ("%d%*c", &a);//ogrenci sayisi
    struct z * b;//ogrenciler
    b = (struct z *) calloc (a, sizeof (struct z));
    for (c = 0; c < a; ++ c) {//ders notları bellekte yer açıyoruz
        (b + c)->b = (double *) calloc (3, sizeof (double));
        (b + c)->d = (char *) calloc (100, sizeof (char));
    }
    for (c = 0; c < a; ++ c) {//herbir ogrenci icin veri alınıyor
        printf ("Numaranızı girin:\n");
        scanf ("%d%*c", &(b + c)->a);
        for (d = 0; d < 3; ++ d) {//dersler
            printf ("Ders notlarınızı giriniz:");
            scanf ("%lf%*c", (b + c)->b + d);
        }
        (b + c)->c = * ((b + c)->b + 0) + * ((b + c)->b + 1) + * ((b + c)->b + 2);
        (b + c)->c /= 3;
        printf ("%d Numaralı öğrencinin ismini giriniz:\n", (b + c)-> a);
        fgets ((b + c)->d, 10, stdin);
    }
    for (c = 0; c < a; ++c) {
        printf ("%d numaralı öğrencinin ismi ve ortalaması:%s %lf\t", (b + c)->a, (b + c)->d, (b + c)->c);
    }
    printf ("\n\n\n");
    for (c = 0; c < a; ++ c) {
        if ((b + c)->c > e) {
            e = (b + c)->c;
        }
        if ((b + c)->c > 70.0) {
            printf ("%d numaralı öğrenci başarılı öğrenciler katagorisine girmiştir ismi ve ortalaması: %s %lf\n\n\n", (b + c)->a, (b + c)->d, (b + c)-> c);
        }
    }
    for (c = 0; c < a; ++ c) {
        if (e == (b + c)->c) {
            printf ("%d numaralı öğrencinin ortalaması en yüksektir ismi ve ortalaması: %s %lf\n\n\n", (b + c)->a, (b + c)->d, (b + c)-> c);
        }
    }
    return EXIT_SUCCESS;
}
