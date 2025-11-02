#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
    
        if ((i == 0 || a[i] >= a[i - 1]) && (i == n - 1 || a[i] >= a[i + 1])) {
            printf("Peak element is %d at index %d\n", a[i], i);
            found = 1;
        }
    }

    if (!found)
        printf("No peak element found.\n");

    return 0;
}
