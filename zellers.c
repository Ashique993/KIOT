#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int date,month,year;
    printf("Enter the Year:");
    scanf("%d",&year);
    int count=log10(year)+1;
    if(count>4){
        printf("Invalid");
        return 0;
    }
    printf("Enter the month:");
    scanf("%d",&month);
    if(month<1 || month>12){
        printf("Invalid");
        return 0;
    }
    printf("Enter the date:");
    scanf("%d",&date);
    if(month==1 || month==3 || month==5 || month==7 || month==8 ||month==10||month==12){
        if(date<1 || date>31){
            printf("Invalid");
            return 0;
        }
    }
    else if(month==4||month==6||month==9||month==11){
        if(date<1 || date>30){
            printf("Invalid");
            return 0;
        }
    }
    else if(month==2){
        if((year%100==0 &&year%400==0)||(year%100!=0 &&year%4==0)){
            if(date<1 || date>29){
                printf("Invalid");
                return 0;
            }
        }
        else{
            if(date<1 || date>28){
                printf("Invalid");
                return 0;
            }
        }
    }
    int m;
    if(month>=3){
        m=month-2;
    }
    else if(month<=2){
        m=month+10;
    }
    int d=year%100;
    int c=year/100;
    int f=date+((13*m-1)/5)+d+(d/4)+(c/4)-(2*c);
    int n;
    if(f<0){
        n=abs(f%7);
        n=7-n;
    }
    else{
        n=f%7;
    }
    switch(n){
        case 0:
        printf("The day is Sunday");
        break;
        case 1:
        printf("The day is Monday");
        break;
        case 2:
        printf("The day is Tuesday");
        break;
        case 3:
        printf("The day is Wednesday");
        break;
        case 4:
        printf("The day is Thursday");
        break;
        case 5:
        printf("The day is Friday");
        break;
        case 6:
        printf("The day is Saturday");
        break;
    }
} 
