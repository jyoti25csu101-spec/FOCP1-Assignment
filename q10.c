#include <stdio.h>

int main() {
    int n,count=0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int scores[n];
    printf("Enter student scores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }


    printf("Students who scored 99:\n");
    for (int i = 0; i < n; i++) {
        if (scores[i] == 99) {
            printf("Student who scored 99 at index %d\n", i); 
            count++;
        }
    }

    if (count > 0) {
        printf("Total number of students who scored 99: %d\n", count);
    } else {
        printf("No student found \n");
    }

    return 0;
}
