#include<stdio.h>
#include<math.h>
int main()
{ int i,rem,count=0,copy,arm=0,no;
    printf("enter the no: ");
    scanf("%d",&no);
    no=copy;
    while(no>0){
        no=no/10;
        count++;
    }
    copy=no;
    while(no>0){
        rem=rem%10;
        arm=arm+ceil(pow(rem,count));
        no=no/10;}

        if(copy==arm){
        printf("\n armstrong no");}
        else{
        printf("\n not an armstrong no");}
        return 0;
    }


