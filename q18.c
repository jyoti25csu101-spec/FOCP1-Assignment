#include <stdio.h>

int main() {
    int a[100], n, i;
    int found = 0;

    printf("Enter number of elements : ");
    scanf("%d", &n);


    int freq[100]; 

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) freq[i] = 0;

    for(i = 0; i < n; i++) {
        if(freq[i]) continue;

        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                freq[j] = 1; 
                count++;
            }
        }

        if(count > 1) {
            printf("%d ", a[i]);
            found = 1;
        }
    }

    if(!found)
        printf("-1");

    printf("\n");
    return 0;
}
