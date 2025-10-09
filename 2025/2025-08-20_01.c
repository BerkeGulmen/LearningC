//Öğrenci Yönetim Sistem.
#include <stdio.h>
#include <stdlib.h>
struct z {
    int a;
    char * b;
    double c, d, e;
};
void x (struct z **, int);
void y (struct z *, int);
void t (struct z **, int);
void u (struct z **, int);
int q (const void *, const void *);

int main (int argc, char * * argv, char * * envp) {
    int a = 1, b, d = 0;
    struct z * c = NULL;
    while (a) {
        printf ("Ekle[1]\tSil[2]\tListele[3]\tSırala[4]\tÇıkış[5]\n");
        scanf ("%d%*c", &b);
        switch (b) {
            case 1:
                ++ d;
                x (&c, d);
                break;
            case 2:
                -- d;
                u (&c, d);
                break;
            case 3:
                y (c, d);
                break;
            case 4:
                qsort (c, d, sizeof (struct z), q);
                break;
            case 5:
                t (&c, d);
                a = 0;
                break;
            default:
                printf ("Yanlış sayı girdiniz lütfen tekrar deneyiniz.\n");
                break;
        }
    }
    return EXIT_SUCCESS;
}
int q (const void * a, const void * b) {
    struct z * c = (struct z *) a;
    struct z * d = (struct z *) b;
    if ((c)->a < (d)->a) {
        return - 1;
    }
    else if ((c)->a > (d)->a) {
        return 1;
    }
    else {
        return 0;
    }
}
void u (struct z ** a, int b) {
    int c, d;
    printf ("Silmek istediğiniz öğrencinin numarasını giriniz: ");
    scanf ("%d%*c", &c);
    for (d = 0; d < b; ++ d) {
        if ((*a + d)->a == c) {
            (*(*a + d)) = (*(*a + b));
            free ((*a + b)->b);
            *a = realloc (*a, sizeof (struct z) * (b - 1));
            return;
        }
    }
    printf ("Yanlış öğrenci numarası girdiniz lütfen tekrar deneyiniz.\n");
}
void x (struct z ** a, int b) {
    *a = realloc (*a, sizeof (struct z) * b);
    printf ("Yeni Numara: ");
    scanf ("%d%*c", &(*a + b - 1)->a);
    (*a + b - 1)->b = (char *) calloc (20, sizeof (char));
    printf ("Yeni İsim: ");
    scanf (" %19[^\n]", (*a + b - 1)->b);
    printf ("Yeni Vize: ");
    scanf ("%lf%*c", &(*a + b - 1)->c);
    printf ("Yeni Final: ");
    scanf ("%lf%*c", &(*a + b - 1)->d);
    (*a + b - 1)->e = (((*a + b - 1)->c) * 0.4) + (((*a + b - 1)->d) * 0.6);
}
void y (struct z * a, int b) {
    int c;
    printf ("NUMARA\tISIM\tORTALAMA\n");
    for (c = 0; c < b; ++c) {
        printf ("%d\t%s\t%lf\n", (a + c)->a, (a + c)->b, (a + c)->e);
    }
}
void t (struct z ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free ((*a + c)->b);
    }
    free (*a);
}
