//prg 1
#include<stdio.h>
int main(){
    int n,f=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        f=f*i;    
    }
    printf("Factorial of %d is : %d",n,f);
    return 0;
}


//prg 2
#include<stdio.h>
void count(char *s){
    int a=0,e=0,i=0,o=0,u=0;
    while(*s != '\0'){
        char ch = *s;
        if(ch=='a' || ch=='A'){
            a++;
        }
        else if(ch=='e' || ch=='E'){
            e++;
        }
        else if(ch=='i' || ch=='I'){ 
            i++;
        }
        else if(ch=='o' || ch=='O'){
            o++;
        }
        else if(ch=='u' || ch=='U'){
            u++;
        }
        s++;
    }
    printf("a: %d\n",a);
    printf("e: %d\n",e);
    printf("i: %d\n",i);
    printf("o: %d\n",o);
    printf("u: %d\n",u);
}
int main(){
    char s[500];
    printf("Enter a sentence: ");
    scanf("%[^\n]",&s);
    count(s);
    return 0;
}


//prg 3
#include<stdio.h>
void leap(int year){
    if(year%4==0){
        printf("Entered year is leap year");
    }
    else{
        printf("Entered year is not leap year");
    }
}
int main(){
    int year;
    printf("Enter Year : ");
    scanf("%d",&year);

    leap(year);
}

//prg 4
#include<stdio.h>
void swap(int *x,int *y){
    int t=*x; 
    *x=*y;        
    *y=t;      
}
int main(){
    int x,y;
    printf("Enter a value of x: ");
    scanf("%d",&x);
    printf("Enter a value of y: ");
    scanf("%d",&y);

    printf("Before swapping: x = %d, y = %d\n",x,y);

    swap(&x,&y);

    printf("After swapping: x = %d, y = %d\n",x,y);
    return 0;
}


//prg 5
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++) 
    {
        for(int j=1;j<=5-i;j++) 
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}