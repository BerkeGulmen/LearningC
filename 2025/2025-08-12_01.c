//Öğrenci Yönetim Sistem
#include <stdio.h>
#include <stdlib.h>
struct z {
    int a;
    char * b;
    double c, d, e;
};
void y (struct z *, int);
void u (struct z **, int);
void x (struct z **, int);
void v (struct z **, int);
int o (const void *, const void *);

int main (int argc, char * * argv, char * * envp) {
    int a = 1, b, d = 0;
    struct z * c = NULL;
    while (a) {
        printf ("Ekle [1]\tSil [2]\tListele [3]\tNota Göre Sırala [4]\tÇıkış [5]");
        scanf ("%d%*c", &b);
        switch (b) {
            case 1:
                ++ d;
                x (&c, d);
                break;
            case 2:
                v (&c, d);
                -- d;
                break;
            case 3:
                y (c, d);
                break;
            case 4:
                qsort (c, d, sizeof (struct z), o);
                break;
            case 5:
                u (&c, d);
                a = 0;
                break;
            default:
                printf ("Yanlış sayı girdiniz lütfen tekrar deneyiniz.\n");
                break;
        }
    }
    return EXIT_SUCCESS;
}
int o (const void * a, const void * b) {
    struct z *c;
    struct z *d;
    c = (struct z *) a;
    d = (struct z *) b;
    if ((c->e) > (d->e)) {
        return - 1;
    }
    if ((c->e) < (d->e)) {
        return 1;
    }
    return 0;
}
void v (struct z ** a, int b) {
    int c, d;
    printf ("Sileceğiniz öğrencinin numarasını giriniz: ");
    scanf ("%d%*c", &d);
    for (c = 0; c < b; ++ c) {
        if ((*a + c)->a == d) {
            free ((*a + c)->b);
            *((*a + c)) = *((*a + b - 1));
            free ((*a + b - 1)->b);
            *a = realloc (*a, sizeof (struct z) * (b - 1));
            return;
        }
    }
    printf ("Yanlış numara girdiniz lütfen tekrar deneyiniz:\n");
}
void x (struct z ** a, int b) {
    *a = realloc (*a, sizeof (struct z) * b);
    printf ("Yeni Numara. ");
    scanf ("%d%*c", &(*a + b - 1)->a);
    (*a + b - 1)->b = (char *) calloc (20, sizeof (char));
    printf ("Yeni Isim. ");
    scanf (" %19[^\n]", (*a + b - 1)->b);
    printf ("Yeni Vize. ");
    scanf ("%lf%*c", &(*a + b - 1)->c);
    printf ("Yeni Final. ");
    scanf ("%lf%*c", &(*a + b - 1)->d);
    (*a + b - 1)-> e = (((*a + b - 1)->c) * 0.4) + (((*a + b - 1)->d) * 0.6);
}
void y (struct z * a, int b) {
    int c;
    printf ("NUMARA\tISIM\tORTALAMA\n");
    for (c = 0; c < b; ++ c) {
        printf ("%d\t%s\t%lf\n", (a + c)->a, (a + c)->b, (a + c)->e);
    }
}
void u (struct z ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free ((*a + c)->b);
    }
    free (*a);
}
