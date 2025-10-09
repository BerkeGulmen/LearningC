//öğrenci yönetim sistemi.
#include <stdio.h>
#include <stdlib.h>
struct z {
    char * a;//isim
    int b;//numara
    double c, d, e;//vize final ortalama (vize * 0.4 + final * 0.6)
};
void x (struct z *, int);
void y (struct z *, int);

int main (int argc, char * * argv, char * * envp) {
    int a, b = 1, d = 0;
    struct z * c = NULL;
    while (b) {
        printf ("\n[1]-Ekle\n[2]-Sil\n[3]-Düzenle\n[4]-Listele\n[5]-Nota göre sırala\n[6]-İsme göre sırala\n[7]-Geçenler\n[8]-Kalanlar\n[9]-Çıkış\n");
        scanf ("%d%*c", &a);
        switch (a) {
            case 1:
                ++ d;
                x (c, d);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                y (c, d);
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                b = 0;
                break;
            default:
                printf ("Verilen sayıların dışında bir sayı girdiniz lütfen tekrar deneyiniz.\n");
                break;
        }
    }
    return EXIT_SUCCESS;
}
void x (struct z * a, int b) {
    a = realloc (a, b * sizeof (struct z));
    (a + b - 1)->a = (char *) calloc (20, sizeof (char));
    printf ("Yeni öğrenci isim:\n");
    fgets ((a + b - 1)->a, 20, stdin);
    (a + b)->a = '\0';
    printf ("Yeni öğrenci numara:\n");
    scanf ("%d%*c", &(a + b - 1)->b);
    printf ("Yeni öğrenci vize:\n");
    scanf ("%lf%*c", &(a + b - 1)->c);
    printf ("Yeni öğrenci final:\n");
    scanf ("%lf%*c", &(a + b - 1)->d);
    (a + b - 1)-> e = ((a + b - 1)-> c) * 0.4 + ((a + b - 1)-> d) * 0.6;
}
void y (struct z * a, int b) {
    int c;
    printf ("Numara\tİsim\tNot\n");
    for (c = 0; c < b; ++ c) {
        printf ("%d\t%s\t%lf\n", (a + c)->b, (a + c)->a, (a + c)->e);
    }
}
