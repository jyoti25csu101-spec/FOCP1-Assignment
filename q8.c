#include<stdio.h>1
int main(){
    int x,y,n;
    int sum;
    printf("enter value of n:\n");
    scanf("%d", &n);
    x=0;
    y=1;
    sum=0;
    while(sum<=n){
        printf("%d",sum);
        x=y;
        y=sum;
        sum=x+y;
    }
    return 0;
    
}