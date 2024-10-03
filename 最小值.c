#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        scanf("%d",&c);
        if(b==1){
        	d=c;
		}
        if(d>c){
            d=c;
        }

    }
    printf("min=%d",d);
    return 0;
}

