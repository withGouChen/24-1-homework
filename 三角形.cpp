#include<stdio.h>
#include<math.h>
int main()

{
    double a,b,c,d,e,f;
   
    printf("Enter 3 sides of the triangle:");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        d=(a+b+c)/2.0;e=a+b+c;

        f=sqrt(d*(d-a)*(d-b)*(d-c));
        printf("area=%.2f;perimeter=%.2lf",f,e);

    }else{
printf("These sides do not correspond to a valid triangle");
    }
    return 0;
}

