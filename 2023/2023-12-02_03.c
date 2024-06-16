#include <stdio.h>
int main (int argc, char **argv, char **envp) {
    int a, b, secim, c;
    printf ("Toplamları bulmak için 1 Çarpımlarını bulmak için 2: ");
    scanf ("%d", &secim);
    if (secim == 1) {
        printf ("Kaça kadar sayıların toplamını bulmak istersiniz? (girilen sayı hariç)");
        scanf ("%d", &c);
        b = 0;
        for (a = 1; a < c; ++ a) {
            b += a;
        }
        printf ("Toplamın sonucu: %d\n", b);
    }
    else if (secim == 2) {
        printf ("Kaça kadar faktöriyeli bulmak istiyorsunuz? ");
        scanf ("%d", &c);
        for (a = 2, b = 1; a < c; ++ a) {
            b *= a;
        }
        printf ("Fakröriyelin sonucu: %d\n", b);
    }
    else {
        printf ("Hatalı seçim yaptını.\n");
    }
    return 0;
}
