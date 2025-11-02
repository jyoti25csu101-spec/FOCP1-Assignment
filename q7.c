#include<stdio.h>
int main()
{int i,j,s,n;
n=5;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
    printf("%d",(j+1)%2);

for(s=1;s<=2*(n-i);s++)
    printf(" "); 

for(j=1;j<=i;j++)
    printf("%d",(j+1)%2);

    printf("\n");
}

    return 0;
}