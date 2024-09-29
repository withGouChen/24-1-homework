#include<stdio.h>
int main()
{
    int a,b;
    for(b=0;b<=4;b=b+1){
    printf("Enter grade:");
    scanf(" %d",&a);
    if(a>=60){
        printf(" Pass\n");
    }else{
        printf(" Fail\n");
    }
    }
    return 0;
}

