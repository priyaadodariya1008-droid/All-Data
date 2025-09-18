#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Marks:");
    scanf("%d",&a);

    if(a>=91){
        printf("Your grade is A");
    }
    else if(a>=71){
        printf("Your grade is B");
    }
    else if(a>=61){
        printf("Your grade is C");
    }
    else if(a>=51){
        printf("Your grade is D");
    }
    else if(a>=41){
        printf("Your grade is E");
    }
    else{
        printf("Your grade is F");
    }
    return 0;
}