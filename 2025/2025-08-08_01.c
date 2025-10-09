//Öğrenci Yönetim Sistem
#include <stdio.h>
#include <stdlib.h>
struct z {
    int a;//numara
    char * b;//isim
    double c, d, e;//vize final ortalama (vize * 0.4 + final * 0.6)
};//Öğrenci veri

void x (struct z **, int);
void y (struct z **, int);
void v (struct z *, int);
void u (struct z **, int);

int main (int argc, char * * argv, char * * envp) {
    int a = 1, b, c = 0;
    struct z * d = NULL;
    while (a) {
        printf ("Ekle[1]\tSil[2]\tListele[3]\tÇıkış[4]\n");
        scanf ("%d%*c", &b);
        switch (b) {
            case 1:
                ++ c;
                x (&d, c);
                break;
            case 2:
                y (&d, c);
                break;
            case 3:
                v (d, c);
                break;
            case 4:
                u (&d, c);
                a = 0;
                break;
            default:
                printf ("Yanlış sayı girdiniz lütfen tekrar deneyiniz.\n");
                break;
        }
    }
    return EXIT_SUCCESS;
}
void x (struct z ** a, int b) {
    *a = realloc (*a, sizeof (struct z) * b);
    (*a + b - 1)->b = (char *) calloc (20, sizeof (char));
    printf ("Yeni Numara. ");
    scanf ("%d%*c", &(*a + b - 1)->a);
    printf ("Yeni İsim. ");
    scanf (" %19[^\n]", (*a + b - 1)->b);
    printf ("Yeni Vize. ");
    scanf ("%lf%*c", &(*a + b - 1)->c);
    printf ("Yeni Final. ");
    scanf ("%lf%*c", &(*a + b - 1)->d);
    (*a + b - 1)->e = (((*a + b - 1)->c) * 0.4) + (((*a + b - 1)->d) * 0.6);
}
void y (struct z ** a, int b) {
    int c, d;
    printf ("Silmek istediğiniz öğrencinin numarasını yazınız. ");
    scanf ("%d%*c", &c);
    for (d = 0; d < b; ++ d) {
        if ((*a + d)->a == c) {
            break;
        }
    }
    *(*a + d) = *(*a + b - 1);
    *a = realloc (*a, sizeof (struct z) * (b - 1));
}
void v (struct z * a, int b) {
    int c;
    printf ("NUMARA\tISIM\tORTALAMA\n");
    for (c = 0; c < b; ++ c) {
        printf ("%d\t%s\t%lf\n", (a + c)->a, (a + c)->b, (a + c)->e);
    }
    printf ("\n");
}
void u (struct z ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free ((*a + c)->b);
    }
}
