#include<stdio.h>
#include<conio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main(){
    int num1,num2,choice;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("0.Exit\n");

    printf("Enter your choice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Addition is = %d",add(num1,num2));
        break;
    
    case 2:
        printf("Subtraction is = %d",sub(num1,num2));
        break;

    case 3:
        printf("Multiplication is = %d",mul(num1,num2));
        break;

    case 4:
        printf("Division is = %d",div(num1,num2));
        break;

    case 0:
        printf("Exiting......");
        break;

    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}