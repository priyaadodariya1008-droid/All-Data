#include <stdio.h>
int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d",&score);

    if(score >= 91)
        grade = 'A';
    else if(score >= 71)
        grade = 'B';
    else if(score >= 61)
        grade = 'C';
    else if(score >= 51)
        grade = 'D';
    else if(score >= 41)
        grade = 'E';
    else
        grade = 'F';

    printf("Your grade is %c. ", grade);

    if (grade >= 'A' && grade <= 'E') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}
