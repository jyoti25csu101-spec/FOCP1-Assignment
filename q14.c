#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; 

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}

int main() {
    int n, i, count = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            count++;
    }

    printf("prime numbers in the array: %d\n", count);

    return 0;
}
