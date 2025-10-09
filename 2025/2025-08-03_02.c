//Q sort
#include <stdio.h>
#include <stdlib.h>
int x (const void *, const void *);
int y (const void *, const void *);

int main (int argc, char * * argv, char * * envp) {
    int * a, b, c;
    printf ("Kaç sayı gireceksiniz?:\n");
    scanf ("%d%*c", &b);
    a = (int *) calloc (b, sizeof (int));
    printf ("Sayılarınızı giriniz:\n");
    for (c = 0; c < b; ++ c) {
        scanf ("%d%*c", (a + c));
    }
    printf ("Küçükten büyüğe sıralama:");
    qsort(a, b, sizeof (int), x);
    for (c = 0; c < b; ++ c) {
        printf ("%d ", * (a + c));
    }
    printf ("\n");
    printf ("Büyükten küçüğe sıralama:");
    qsort(a, b, sizeof (int), y);
    for (c = 0; c < b; ++ c) {
        printf ("%d ", * (a + c));
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
int x (const void * a, const void * b) {
    int c = * (int *) a;
    int d = * (int *) b;
    if (c > d) {
        return 1;
    }
    else if (c < d) {
        return - 1;
    }
    return 0;
}
int y (const void * a, const void * b) {
    int c = * (int *) a;
    int d = * (int *) b;
    if (c < d) {
        return 1;
    }
    else if (c > d) {
        return - 1;
    }
    return 0;
}
