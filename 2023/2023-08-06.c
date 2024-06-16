#include <stdio.h>

int main (void) {
    int omer;
    omer = 13;
    printf ("Değişkenimzin yeni değeri: %d\n", omer);
    omer = omer * 2 - 12;
    printf ("Değişkenimizin en son değeri: %d\n", omer);
    if (omer < 25) {
        printf ("Değişkenimizin değeri: %d\n", omer);
        omer = 25;
        printf ("Değişkenimzin yeni değeri: %d\n", omer);
    }
    if (omer == 25) {
        printf ("25'e eşittir.\n");
        omer = 55;
        printf ("Değişkenimzin yeni değeri: %d\n", omer);
    }
    else {
        omer = 23;
        printf ("Değişkenimzin yeni değeri: %d\n", omer);
    }
    if (omer > 25)
        printf ("25'ten büyüküktür.\n");
    
    
    
    
    
    
    
    printf ("Değişkenimzin son değeri: %d\n", omer);
    return 0;
}
