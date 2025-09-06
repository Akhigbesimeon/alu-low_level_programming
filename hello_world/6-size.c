#include <stdio.h>

int main () {
        // Declear variables
        char letter = 'X';
        int age = 20;
        float pi = 4.566f;
        double bigPi = 3.14159265358979;
        long population  = 7800000000;

        //Print correct format
        printf("Char: %c\n", letter);
        printf("Int: %d\n", age);
        printf("Float: %.2f\n", pi);
        printf("Double: %.10lf\n", bigPi);
        printf("Long: %ld\n", population);

        return 0;
}

