#include <stdio.h>
int main (void) {
    int sayilar [] = {4, 0, 2, 9, 1, 8, 7, 5, 6, 3}; // Kullanıcı tarafından verilen sayılar
    int adet = 10; // Kullanıcı tarafından verilen sayıların adedi
    
    int sayacA = 0;
    int sayacB = 0;
    int geciciBos = 0;
    int degisiklik = 1;
    while (degisiklik == 1) {
        sayacB = sayacA + 1;
        while (sayacB  < adet) {
            if ( sayilar [sayacA] > sayilar [sayacB] ) {
                geciciBos = sayilar [sayacB];
                sayilar [sayacB] = sayilar [sayacA];
                sayilar [sayacA] = geciciBos;
            }
            else {
                degisiklik = 0;
            }
            sayacB = sayacB + 1;
        }
        sayacA = sayacA + 1;
    }  
        
        
    int sira = 0; // ekrana yazdırmak için sıra numarası oluştur
    while (sira < adet) { // yazdırılacak sayı kadar döndür
        printf ( "%d    ", sayilar [sira] ); // sırası geleni yazdır
        sira = sira + 1; // sırayı bir arttır
    }
    printf ( "\n" ); // satırsonu aşağı indir (güzel gözüksün diye)
    return 0;
}
