#include<stdio.h>
int main()
{
    int a,f;
    double b=3.00,c=2.50,d=4.10,e=10.20,h=0;
    printf("[1]apple\n[2]pear\n[3]orange\n[4]grape\n[0]exit\n");
    
    for(f=0;f<=4;f++){
    scanf("%d",&a);
    if(a==0){
        return 0;
    }else{

    
    
    if(a==1)
    {
    printf("price=%.1f\n",b);
    }
    if(a==2){
    printf("price=%.1f\n",c);
    }
    if(a==3){
    printf("price=%.1f\n",d);
    }
    if(a==4){
    printf("price=%.1f\n",e);
    }
    if(a>4){
    	printf("price=%.0f\n",h);

        }
    
    }
    }return 0;
    
}

