#include <stdio.h>

int main() {
    int arr[100], n, pos, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

        printf(" array before insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("Insert at:\n1. Front\n2. Middle\n3. End\nWhat is your choice: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    if(pos == 1) { 
        for(i = n; i > 0; i--)
            arr[i] = arr[i-1];
        arr[0] = element;
        n++;
    } 
    else if(pos == 2) { 
        int mid = n / 2;
        for(i = n; i > mid; i--)
            arr[i] = arr[i-1];
        arr[mid] = element;
        n++;
    } 
    else { 
        arr[n] = element;
        n++;
    } 

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

