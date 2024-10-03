#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);   
    if(b<153){
        printf("Narc No:");
    }if(a>407){
        printf("Narc No:");
    } 
    if(b<370&&a<=153){
        printf("Narc No:153");
    }

    if(b>=370&&a<=153&&b<371){
        printf("Narc No:153 370");
    }
    if(b>=370&&a>153&&b<371){
        printf("Narc No:370");
    }
    if(a<=153&&b>=371&&b<407){
        printf("Narc No:153 370 371");
    }
    if(a>153&&b>=371&&b<407&&a<=370){
        printf("Narc No:370 371");
    }
    if(a<=153&&b>=407){
        printf("Narc No:153 370 371 407");
    }
    if(a==371&&b<407){
        printf("Narc No:371");
    }
    if(a>153&&a<=370&&b>=407){
        printf("Narc No:370 371 407");
    }
    if(a==371&&b>=407){
        printf("Narc No:371 407");
    }
    if(a<=407&&a>371&&b>=407)
    {
        printf("Narc No:407");
    }
    return 0;



}
