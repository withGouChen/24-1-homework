#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(b<a){
        d=a;
        a=b;
        b=d;
        
    }
    if(c<a){
        d=a;
        a=c;
        c=d;

    }
    if(c<b){
        d=b;
        b=c;
        c=d;
    }
    printf("%d %d %d",a,b,c);
    return 0;

}
