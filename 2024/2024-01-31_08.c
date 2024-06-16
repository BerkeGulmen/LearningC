/*
 Bir olimpiyatçı ek iş olarak çiçekçilik yapmaktadır. Olimpiyatçı elindeki gülleri 4'erli veya 7'şerli demetler haline getirdiğinde her defasında açıkta 3 gül kalmaktadır. 1000'den fazla gülü olduğuna göre en az kaç gülü olduğunu bulan programı matematik formülleri kullanmadan yazınız.
 (1011)
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv, char **envp) {
    int a;
    for (a = 1001; ; ++ a) {
        if ((a % 4) == 3 && (a % 7) == 3) {
            printf ("Sonuç: %d\n", a);
            break;
        }
    }
    return EXIT_SUCCESS;
}
