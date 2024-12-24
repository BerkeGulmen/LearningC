/*
Kullanıcıdan kaça kadar bakılacağına dair bir sayı istenir. (Mesela 100 derse, birden yüze kadar tek tek sayılara bakılacak.)
Kullanıcıdan bir sayı daha istenir. Kullanıcının girdiği ikinci sayıya tam bölünebilen kaç tane sayı vardır, ekrana yazdır.
(Örneğin, önce 7 girmiş olsun ve ardından 2 girmiş olsun. Birden yediye kadar sayılara bakılacak, ikiye tam bölünebilenler
sayılacak. 2, 4, ve 6 olmak üzere üç tanedir.)

*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    int a, b, c;
    scanf ("%d %d%*c", &a, &b);
    for (c = 1; c <= a; ++ c) {
        if ((c % b) == 0) {
            printf ("%d ", c);
        }
    }
    printf ("\n");
    return EXIT_SUCCESS;
}
