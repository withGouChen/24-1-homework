#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    for(a=a;a>0;a--){
        b=a;
    for(c=c;b>0;c++){
    	b--;
        printf("%c ",'A'+c);

    }
    printf("\n");
    c=c;
    
    }
    return 0;
}

