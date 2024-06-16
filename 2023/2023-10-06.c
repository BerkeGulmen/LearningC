#include <stdio.h> // printf (ekrana yazı yazma) çalışsın diye

int main (void) { // programlar her zaman main'den başlar
    int sayilar [] = {4, 0, 2, 9, 1, 8, 7, 5, 6, 3}; // Kullanıcı tarafından verilen sayılar
    int adet = 10; // Kullanıcı tarafından verilen sayıların adedi

    int sayacA = 0; // İlk sayaç
    int sayacB = 0; // İkinci sayaç
    int geciciBos = 0; // İki sayıyı yer değiştirmek için geçici kullanılan değişken
    while ( sayacA < (adet - 1) ) { // sayacA yavaş hareketle birer birer ilerleyecek
        sayacB = sayacA + 1; // her döngü başında sayacB, sayacA'nın bir yanına yerleşir
        while ( sayacB < adet ) { // sayacB hızlı hareketlerle ilerleyecek
            if ( sayilar [sayacA] > sayilar [sayacB] ) { // Değişikliğe gerek var mı?
                geciciBos = sayilar [sayacB]; // sayıyı geçici bir yere kopyala
                sayilar [sayacB] = sayilar [sayacA]; // kopyalanan sayının üzerine diğer sayıyı yaz
                sayilar [sayacA] = geciciBos; // geçici yerdeki yedeklenmiş sayıyı uygun yere yaz
            }
            sayacB = sayacB + 1; // sayacB'yi hareket ettir
        }
        sayacA = sayacA + 1; // sayacA'yı hareket ettir
    }

    int sira = 0; // ekrana yazdırmak için sıra numarası oluştur
    while (sira < adet) { // yazdırılacak sayı kadar döndür
        printf ( "%d    ", sayilar [sira] ); // sırası geleni yazdır
        sira = sira + 1; // sırayı bir arttır
    }
    printf ( "\n" ); // satırsonu aşağı indir (güzel gözüksün diye)
    return 0; // programı bitir
}
