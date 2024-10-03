#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Input m,n:\n");
    scanf("%d%d",&a,&b);
    d=a*b;
    for(;a%b==0;){if(a<b){
        printf("%d %d",b,a);
        return 0;
    }else{
        printf("%d %d",a,b);
        return 0;
    }


    }
    for(a,b;a%b!=0;){
        c=a%b;
        a=b;
        b=c;
    
    }printf("%d %d",c,d/c);
    return 0;
}

