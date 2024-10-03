#include<stdio.h>
int main()
{
    int b=0,c;
    char a='*';
    for(;a!='#';){
    a=getchar();
    if(a>='0'&&a<='9'){
    c=a-'0';
    printf("%d",c);

    }
    }
    return 0;
}

