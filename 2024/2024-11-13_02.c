/*
 1000$'dan az ve 5 yıl veya daha fazla ise %6 birleşik

 1000$'a eşit veya fazla ise ve 5 yıl veya daha fazla ise %7 birleşik

 5000$'a eşit veya fazla ise ve 5 yıl veya daha fazla ise %8 birleşik

 10000$'a eşit veya fazla ise %10 birleşik

 10 yıldan fazla ise 6 aylık %10 birleşik

 5000$'a eşit veya daha fazla fakat 10000$'a eşit veya 10000$'dan az ise ve 5 yıldan az ise %5 birleşik

 5000$'dan az ise ve 5 yıla eşit veya 5 yıldan fazla ise %5 basit
*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * * argv, char * * envp) {
    double a, b, c, d, e, f;
    scanf ("%lf %lf%*c", &a, &b);
    for (c = 0, f = 0, d = 0; c < 1; ++ c) {
        if (a < 5000 && b >= 5) {
            d = 0;
        }/*
        if (a >= 5000 && (a <= 10000 && b < 5)) {
            d = 1;
        }
        if (a < 1000 && b >= 5) {
            d = 2;
        }
        if (a >= 1000 && b >= 5) {
            d = 3;
        }
        if (a >= 5000 && b >= 5) {
            d = 4;
        }
        if (b > 10) {
            d = 5;
        }
          */
    }
    if (d == 0) {
        c = (b * 12) / 12;
        printf ("%lf\n", c);
        d = a * (5 / 100) * c;
        printf ("%lf\n", d);
    }
    else if (d == 1) {
        
    }
    else if (d == 2) {
        
    }
    else if (d == 3) {
        
    }
    else if (d == 4) {
        
    }
    else {
        
    }
    return EXIT_SUCCESS;
}
