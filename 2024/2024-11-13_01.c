/*
Haftanın gününü hesaplamak için bir formül Rahip Zeller tarafından geliştirildi. m, Mart ile başlayan yılın ayı olsun, m = 1, Ocak
ve Şubat bir önceki yılın 11. ve 12. ayları, d ayın günü, y yüzyılın yılı ve c bir önceki yüzyıl olsun. Örneğin, 1 Nisan 1988 için
m = 2, d = 1, y = 88 ve c = 19. Verilen bir dathe'nin düştüğü haftanın günü aşağıdaki gibi hesaplanır:
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char * * argv, char * * envp) {
    int a, b, c, d, e, f, g, h;
    scanf ("%d %d %d%*c", &a, &b, &c);
    d = c / 100;
    c = c % 100;
    e = (13 - a) / 5;
    f = c / 4;
    g = d / 4;
    h = e + f + g + b + c - (2 * d);
    a = h % 7;
    if (a == 0) {
        printf ("Sunday\n");
    }
    else if (a == 1) {
        printf ("Mondey\n");
    }
    else if (a == 2) {
        printf ("Tuesday\n");
    }
    else if (a == 3) {
        printf ("Wednesday\n");
    }
    else if (a == 4) {
        printf ("Thursday\n");
    }
    else if (a == 5) {
        printf ("Friday\n");
    }
    else if (a == 6) {
        printf ("Saturday\n");
    }
    return EXIT_SUCCESS;
}
