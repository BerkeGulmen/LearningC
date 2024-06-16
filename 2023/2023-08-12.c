
#include <stdio.h>
int main (void) {
    int yu;
    yu = 1;
    while (yu < 5) {
        printf ("Değişkenimizin değeri: %d\n", yu);
        yu = yu + 1;
    }
    int be;
    be = 1;
    while (be < 3) {
        be = be + 1;
        int osman;
        osman = 1;
        int ali;
        while (osman < 17) {
            ali = 0;
            while (ali < osman) {
                printf ("_ ");
                ali = ali + 1;
            }
            printf ("*\n");
            osman = osman + 1;
        }
    }
    int ve;
    ve = 1;
    while (ve < 3) {
        ve = ve + 1;
    int ke;
    ke = 21;
        while (ke > 5) {
            ke = ke - 1;
            int mo;
            mo = 5;
            while (mo < ke) {
                printf ("_ ");
                mo = mo + 1;
            }
            printf ("*\n");
            ke = ke - 1;
        }
    }
    
    
    
    
    
    
    

    return 0;
}
