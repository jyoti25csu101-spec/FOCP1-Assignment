#include <stdio.h>

void swapPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 0, b = 0; 

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("\nOriginal numbers: a = %d, b = %d\n", a, b);

// using temporary variable
    int x = a, y = b;
    int temp = x;
    x = y;
    y = temp;
    printf("Swap using temporary variable: a = %d, b = %d\n", x, y);

 // using arithmetic
    x = a; y = b;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Swap using arithmetic: a = %d, b = %d\n", x, y);

// using XOR
    x = a; y = b;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("Swap using XOR: a = %d, b = %d\n", x, y);

 //  using pointers
    x = a; y = b;
    swapPointer(&x, &y);
    printf("Swap using pointers: a = %d, b = %d\n", x, y);

    return 0;
}
