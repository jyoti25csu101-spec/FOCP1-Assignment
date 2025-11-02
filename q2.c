#include<stdio.h>

    int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }

    else if(a<b)
    {
        return gcd(b,a);
    }

    else
    {
    return gcd(b,a%b);
    }

}
    int main(){
        int a,b,c;
    
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    c= gcd(a,b);
    printf("gcd =%d",c);
    return 0;

}




