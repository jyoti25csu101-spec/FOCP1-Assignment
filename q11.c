#include<stdio.h>

int main() {
    int N, i;

    printf("Enter number of integers: ");
    scanf("%d", &N);

    int a[N], even[N], odd[N];
    int k1 = 0, k2 = 0;
 
    printf("Enter %d integers:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);  
    }
 
    for(i = 0; i < N; i++) {
        if(a[i] % 2 == 0)
            even[k1++] = a[i];
        else
            odd[k2++] = a[i];
    }
  
    printf("Array elements of even are (%d): ", k1);
    for(i = 0; i < k1; i++)
        printf("%d ", even[i]);
    printf("\n");
   
    printf("Array elements of odd are (%d): ", k2);
    for(i = 0; i < k2; i++)
        printf("%d ", odd[i]);
    printf("\n");

    return 0;
}
