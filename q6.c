#include <stdio.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int binary, rem, decimal = 0, base = 1;
        printf("Enter binary: ");
        scanf("%d", &binary);
        while (binary != 0) {
            rem = binary % 10;
            decimal += rem * base;
            binary /= 10;
            base *= 2;
        }
        printf("Decimal: %d\n", decimal);
    } 
    else {  
        int decimal, rem, binary = 0, place = 1;
        printf("Enter decimal: ");
        scanf("%d", &decimal);
        while (decimal > 0) {
            rem = decimal % 2;
            binary += rem * place;
            place *= 10;
            decimal /= 2;
        }
        printf("Binary: %d\n", binary);
    } 

    return 0;
}
