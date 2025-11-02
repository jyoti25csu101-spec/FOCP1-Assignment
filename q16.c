#include <stdio.h>

int main() {
    int a[100], n, position, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

        printf(" array before insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("Insert at:\n1. Front\n2. Middle\n3. End\nWhat is your choice: ");
    scanf("%d", &position);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    if(position == 1) { 
        for(i = n; i > 0; i--)
            a[i] = a[i-1];
        a[0] = element;
        n++;
    } 
    else if(position == 2) { 
        int mid = n / 2;
        for(i = n; i > mid; i--)
            a[i] = a[i-1];
        a[mid] = element;
        n++;
    } 
    else { 
        a[n] = element;
        n++;
    } 

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
