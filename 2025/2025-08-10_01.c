//Öğrenci Yönetim Sistem
#include <stdio.h>
#include <stdlib.h>
struct z {
    int a;
    char * b;
    double c, d, e;
};
void x (struct z **, int);
void y (struct z *, int);
void u (struct z **, int);
void v (struct z **, int);

int main (int argc, char * * argv, char * * envp) {
    int a = 1, b, d = 0;
    struct z * c = NULL;
    while (a) {
        printf ("Ekle[1]\tSil[2]\tListele[3]\tÇıkış[4]\n");
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
                u (&c, d);
                a = 0;
                break;
            default:
                printf ("Verilenlerin dışında bir numara girdiniz lütfen tekrar deneyiniz. ");
                break;
        }
    }
    return EXIT_SUCCESS;
}
void v (struct z ** a, int b) {
    int c, d;
    printf ("Silmek istediğiniz öğrencinin numarasını giriniz: ");
    scanf ("%d%*c", &c);
    for (d = 0; d < b; ++ d) {
        if ((*a + d)->a == c) {
            free ((*a + d)->b);
            *((*a + d)) = *((*a + b - 1));
            *a = realloc (*a, sizeof (struct z) * (b - 1));
            return;
        }
    }
    printf ("Silmek istediğiniz öğrencinin numarasını yanlış girdiniz.\n");
}
void y (struct z * a, int b) {
    int c;
    printf ("NUMARA\tISIM\tORTALAMA\n");
    for (c = 0; c < b; ++ c) {
        printf ("%d\t%s\t%lf\n", (a + c)->a, (a + c)->b, (a + c)->e);
    }
}
void x (struct z ** a, int b) {
    *a = realloc(*a, sizeof (struct z *) * b);
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
void u (struct z ** a, int b) {
    int c;
    for (c = 0; c < b; ++ c) {
        free ((*a + c)->b);
    }
    free (*a);
}
