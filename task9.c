#include<stdio.h>
int main(){
    int a,grade;
    printf("Enter Your Marks:");
    scanf("%d",&a);

    if(a>=91){
        grade='A';
    }
    else if(a>=71){
        grade='B';
    }
    else if(a>=61){
        grade='C';
    }
    else if(a>=51){
        grade='D';
    }
    else if(a>=41){
        grade='E';
    }
    else{
        grade='F';
    }

    switch(grade){
        case 'A':
            printf("Your grade is A.Excellent work !");
            break;
        case 'B':
            printf("Your grade is B.Well done !");
            break;
        case 'C':
            printf("Your grade is C.Good job !");
            break;
        case 'D':
            printf("Your grade is D.You passed but you could do better !");
            break;
        case 'E':
            printf("Your grade is E.you barely passed !");
            break;
        case 'F':
            printf("Your grade is F.Sorry, you failed !");
            break;
        default:
            printf("Invalid");
            break;
    }

    return 0;
}