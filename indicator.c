// #include<stdio.h>
// int main(){
//     char str[100];
//     char *ptr;
//     int length = 0;

//     printf("Enter a string: ");
//     scanf("%s",str);  

//     ptr=str; 

//     while (*ptr!='\0') {
//         length++;
//         ptr++; 
//     }

//     printf("Length of the string = %d\n", length);

//     return 0;
// }

#include<stdio.h>
int cube(int num){
    return num*num*num;
}
int main(){
    int r,c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);

    int arr[r][c];

    printf("Enter elements of the 2D array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Elements at [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nCube of all elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",cube(arr[i][j]));
        }
    }
    return 0;
}