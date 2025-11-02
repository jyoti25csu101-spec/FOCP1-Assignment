#include <stdio.h>

void rotate(int a[], int n) {
    int temp = a[n-1];
    for(int i = n-1; i > 0; i--)
        a[i] = a[i-1];
    a[0] = temp;
}

int main() {
    int a[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    rotate(a, n);

    printf("Rotated array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
