#include<stdio.h>
int main(){
    int a,b;
    printf("enter value of a: ");
    scanf("%d", &a);
    printf("enter value of b: ");
    scanf("%d", &b);
    int sub=a+(~b+1);
    printf("difference:%d\n",sub);
    return 0;
}