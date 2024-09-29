#include<stdio.h>
int main()
{
    int a,b,c,a1=0,a2=0,a3=0,a4=0,a5=0;
    printf("Enter n: ");
    scanf("%d",&a);
    for(c=0;c<a;c++){
        printf("Enter grade %d:",c+1);
        scanf("%d",&b);
        if(90<=b&&b<=100){
            a1++;
        }
        if(80<=b&&b<=89){
            a2++;
        }
        if(70<=b&&b<=79){
            a3++;
        }
        if(60<=b&&b<=69){
            a4++;
        }
        if(0<=b&&b<=59){
            a5++;
        }
    }
    printf("The number of A(90~100):%d\nThe number of B(80~89):%d\nThe number of C(70~79):%d\nThe number of D(60~69):%d\nThe number of E(0~59):%d",a1,a2,a3,a4,a5);
    return 0;
}

