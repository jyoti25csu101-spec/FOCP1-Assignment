#include <stdio.h>

int main() {
    
    int a[100], size, i, max, min;

    printf("Enter size of array:\n");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < size; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }

    printf("Maximum value of array: %d\n", max);
    printf("Minimum value of array: %d\n", min);

    return 0;
}
