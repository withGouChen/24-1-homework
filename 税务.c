#include<stdio.h>
int main()
{
    double salary,t;
    printf("Enter the salary: ");
    scanf("%lf",&salary);
    if(salary<=3500){
        t=0;
    }
    if(3500<salary&&salary<=5000){
        t=0.03*(salary-3500);
    }
    if(5000<salary&&salary<=8000){
        t=0.1*(salary-3500)-105;
    }
    if(8000<salary&&salary<=12500){
        t=0.2*(salary-3500)-555;
    }
    if(12500<salary&&salary<=38500){
        t=0.25*(salary-3500)-1005;
    }
    if(38500<salary&&salary<=58500){
        t=0.3*(salary-3500)-2755;
    }
    if(58500<salary&&salary<=83500){
        t=0.35*(salary-3500)-5505;
    }
    if(83500<salary){
        t=0.45*(salary-3500)-13505;
    }
    printf("tax=%.2f",t);
    return 0;
    
}
