#include<stdio.h>
int main()
{
    char ch;
    
    
    int a=0,b=0,f=0,d=0,e;
    for(e=0;e<15;e++){
        ch=getchar();

    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        a++;
    }else
    if(ch==' '||ch=='\n'){
        b++;
    }else
    if(ch>='0'&&ch<='9'){
        f++;
    }else{
        d++;
    }
    }

    printf("letter=%d blank=%d digit=%d other=%d",a,b,f,d);
    return 0;
}

