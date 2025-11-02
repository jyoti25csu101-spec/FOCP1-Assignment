#include <stdio.h>

int main() {
    float x, y;

    
    printf("Enter x coordinate: ");
    scanf("%f", &x);
    printf("Enter y coordinate: ");
    scanf("%f", &y);

    
    if (x > 0 && y > 0) {
        printf("First Quadrant\n");
    } 
    else if (x < 0 && y > 0) {
        printf("Second Quadrant\n");
    } 
    else if (x < 0 && y < 0) {
        printf("Third Quadrant\n");
    } 
    else if (x > 0 && y < 0) {
        printf("Fourth Quadrant.\n");
    } 
    else if (x == 0 && y == 0) {
        printf("Origin.\n");
    } 
    else if (x == 0) {
        printf("Y-axis.\n");
    } 
    else if (y == 0) {
        printf("X-axis.\n");
    }

    return 0;
}
