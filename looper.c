#include<stdio.h>
int main(){
    char i='a';
    do{
        printf("%c, ",i);
        i+=4;
    }
    while(i<='z');
}

#include<stdio.h>
int main()
{
    int num,sum,a,b;
    printf("Enter any number:");
    scanf("%d",&num);

    a=num;
    while(a>10){
        a=a/10;
    }
    b=num%10;
    sum=a+b;

    printf("Sum of first and last digit: %d",sum);
    return 0;
}

#include<stdio.h>
int main(){
    int num,sum=0,last;
    printf("Enter number:");
    scanf("%d",&num);

    while(num>0){
        last=num%10;
        sum=sum+last;
        num=num/10;
    }
    printf("Sum of number : %d",sum);
    return 0;
}