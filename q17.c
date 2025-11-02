#include <stdio.h>

int main() {
    int a[100], n, choice, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("array before deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("Delete from:\n1. Front\n2. Middle\n3. End\nwhat is your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        for(i = 0; i < n-1; i++)
            a[i] = a[i+1];
        n--;
    }
    else if(choice == 2) {
        int mid = n / 2;
        for(i = mid; i < n-1; i++)
            a[i] = a[i+1];
        n--;
    }
    else {
        n--;
    }
    

    printf("Array after deletion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
