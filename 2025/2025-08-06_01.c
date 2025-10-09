//Öğrenci Yönetim Sistemi.
#include <stdio.h>
#include <stdlib.h>
struct z {//Öğrenci
    int a;//Numara
    char * b;//İsim
    double c, d, e;//Vize Final Ortalama (e = c * 0.4 + d * 0.6)
};
void x (struct z **, int);
void y (struct z *, int);
void v (struct z *, int);

int main (int argc, char * * argv, char * * envp) {
    int a = 1, b, d = 0;
    struct z * c = NULL;
    while (a) {
        printf ("\nEkle[1]\nSil[2]\nListele[3]\nÇıkış[4]\n");
        scanf ("%d%*c", &b);
        switch (b) {
            case 1:
                ++ d;
                x (&c, d);
                break;
            case 2:
                v (c, d);
                break;
            case 3:
                y (c, d);
                break;
            case 4:
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
    printf ("Numara:\n");
    scanf ("%d%*c", &(*a + b - 1)->a);
    printf ("İsim:\n");
    (*a + b - 1)->b = (char *) calloc (20, sizeof(char));
    scanf (" %19[^\n]", (*a + b - 1)->b);
    printf ("Yeni vize:\n");
    scanf ("%lf%*c", &(*a + b - 1)->c);
    printf ("Yeni final:\n");
    scanf ("%lf%*c", &(*a + b - 1)->d);
    (*a + b - 1)->e = ((*a + b - 1)->c) * 0.4 + ((*a + b - 1)->d) * 0.6;
}
void y (struct z * a, int b) {
    printf ("NUMARA\tİSİM\tORTALAMA\n");
    int c;
    for (c = 0; c < b; ++ c) {
        printf ("%d\t%s\t%lf\n", (a + c)->a, (a + c)->b, (a + c)->e);
    }
}
void v (struct z * a, int b) {
    int c, d;
    printf ("Silmek istediğiniz öğrencinin numarasını yazınız.\n");
    scanf ("%d%*c", &d);
    for (c = 0; c < b; ++ c) {
        if ((a + c)->a == d) {
            break;
        }
    }
    (a + c)->a = 0;
    (a + c)->e = 0;
    free((a + c)->b);
    (a + c)->b = (char *) calloc (20, sizeof (char));
    *((a + c)->b + 0) = 'S';
    *((a + c)->b + 1) = 'I';
    *((a + c)->b + 2) = 'L';
    *((a + c)->b + 3) = 'I';
    *((a + c)->b + 4) = 'N';
    *((a + c)->b + 5) = 'D';
    *((a + c)->b + 6) = 'I';
    *((a + c)->b + 7) = '\0';
}
