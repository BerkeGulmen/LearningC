//Öğrenci Yönetim Sistem.
#include <stdio.h>
#include <stdlib.h>

struct z {
    int a;//Numara
    char * b;//İsim
    double c, d, e;//Vize Final Ortalama (vize * 0.4 + final * 0.6)
};//Öğrenci bilgileri
void x (struct z **, int);
void y (struct z **, int);
void v (struct z *, int);

int main (int argc, char * * argv, char * * envp) {
    int a = 1, b, c = 0;
    struct z * d = NULL;
    while (a) {
        printf ("Ekle [1]\t Sil [2]\t Listele [3]\t Çıkış [4]");
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
                for (a = 0; a < c; ++ a) {
                    free ((d + a)->b);
                }
                free (d);
                a = 0;
                break;
            default:
                printf ("Yanlış sayı girdiniz lütfen tekrar giriniz.\n");
                break;
        }
    }
    return EXIT_SUCCESS;
}
void x (struct z ** a, int b) {
    * a = realloc (* a, sizeof (struct z) * b);
    printf ("Yeni Numara: ");
    scanf ("%d%*c", &(* a + b - 1)->a);
    (* a + b)->b = (char *) calloc (20, sizeof (char));
    printf ("Yeni İsim: ");
    scanf (" %19[^\n]", (* a + b - 1)->b);
    printf ("Yeni Vize: ");
    scanf ("%lf%*c", &(* a + b - 1)-> c);
    printf ("Yeni Final: ");
    scanf ("%lf%*c", &(* a + b - 1)-> d);
    (* a + b - 1)->e = (((* a + b - 1)->c) * 0.4) + (((* a + b - 1)->d) * 0.6);
}
void y (struct z ** a, int b) {
    int c, d;
    printf ("Silceğiniz öğrencinin numarasını veriniz. ");
    scanf ("%d%*c", &c);
    for (d = 0; d < b; ++ d) {
        if ((*a + d)->a == c) {
            break;
        }
    }
    ((*a + d)->a) = 0;
    free ((*a + d)->b);
    (*a + d)->b = (char *) calloc (8, sizeof(char));
    *((*a + d)->b + 0) = 'S';
    *((*a + d)->b + 1) = 'I';
    *((*a + d)->b + 2) = 'L';
    *((*a + d)->b + 3) = 'I';
    *((*a + d)->b + 4) = 'N';
    *((*a + d)->b + 5) = 'D';
    *((*a + d)->b + 6) = 'I';
    *((*a + d)->b + 7) = '\0';
    ((*a + d)->c) = 0;
    ((*a + d)->d) = 0;
    ((*a + d)->e) = 0;
}
void v (struct z * a, int b) {
    printf ("NUMARA\tISIM\tORTALAMA\n");
    int c;
    for (c = 0; c < b; ++ c) {
        if ((a + c)->a != 0) {
            printf ("%d\t%s\t%lf\n", (a + c)->a, (a + c)->b, (a + c)->e);
        }
    }
}
