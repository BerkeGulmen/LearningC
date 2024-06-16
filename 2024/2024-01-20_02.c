/*
 Kullanıcıdan kaça kadar bakılacağına dair bir sayı istenir. (Mesela 100 derse, birden yüze kadar tek tek sayılara bakılacak.) Kullanıcıdan bir sayı daha istenir. Kullanıcının girdiği ikinci sayıya tam bölünebilen kaç tane sayı vardır, ekrana yazdır. (Örneğin, önce 7 girmiş olsun ve ardından 2 girmiş olsun. Birden yediye kadar sayılara bakılacak, ikiye tam bölünebilenler sayılacak. 2, 4, ve 6 olmak üzere üç tanedir.)
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a, b, c;
    printf ("1. sayıyı gir: ");
    scanf ("%d", &a);
    printf ("2. sayıyı gir: ");
    scanf ("%d", &b);
    for (c = 2; c <= a; ++ c) {
        if ((c % b) == 0) {
            printf ("%d\n", c);
        }
    }
    return EXIT_SUCCESS;
}
