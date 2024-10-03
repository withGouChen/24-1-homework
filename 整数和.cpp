#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,e=0;
        scanf("%d",&a);
        for(c=0;10*a/10!=0;c++){
        	e=a%10;
            a=a/10;
            d=d+e;
        }
        printf("%d %d",c,d);
        return 0;
}

