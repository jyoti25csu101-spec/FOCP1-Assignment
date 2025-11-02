#include <stdio.h>

int main() {
    int n, i,position = -1;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int scores[n];

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            position = i;  
            break;      
        }
    }

    if (position != -1)
        printf("First occurrence of 99 found at position %d (index %d)\n", position + 1, position);
    else
        printf("Score 99 not found\n");

    return 0;
}
