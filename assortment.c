// #include<stdio.h>
// int main(){

//     int num;
//     printf("Enter the array's size:");
//     scanf("%d",&num);
//     int arr[num];

//     for(int i=0;i<num;i++){
//         printf("Enter the %d element : ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     printf("Negative elements from the array are : ");
//     for(int i=0;i<num;i++){
//         if(arr[i]<0){
//             printf("%d ",arr[i]);
//         }
//     }
// }

// #include<stdio.h>
// int main(){
//     int rows,cols;

//     printf("Enter number of rows: ");
//     scanf("%d",&rows);
//     printf("Enter number of columns: ");
//     scanf("%d",&cols);

//     int arr[rows][cols];

//     printf("Enter elements of the %d x %d array:\n", rows, cols);
//     for(int i=0;i<rows;i++) {
//         for(int j=0;j<cols;j++) {
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     int largest = arr[0][0];

//     for(int i=0;i<rows;i++) {
//         for(int j=0;j<cols;j++) {
//             if(arr[i][j] > largest) {
//                 largest = arr[i][j];
//             }
//         }
//     }
//     printf("The largest element in the array is: %d\n", largest);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a[10][10],transpose[10][10];
//     int r,c;

//     printf("Enter rows and columns of matrix: ");
//     scanf("%d %d", &r, &c);

//     printf("Enter elements of the matrix:\n");
//     for(int i=0;i<r;i++) {
//         for(int j=0;j<c;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     for(int i=0;i<r;i++) {
//         for(int j=0;j<c;j++) {
//             transpose[j][i] = a[i][j];
//         }
//     }

//     printf("\nTranspose Matrix:\n");
//     for(int i=0;i<c;i++) {
//         for(int j=0;j<r;j++) {
//             printf("%d ",transpose[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
 

#include<stdio.h>
int main(){
    int a[10][10],r,c;
    int rowChoice,colChoice,sumRow=0,sumCol=0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);

    printf("Enter elements of the %d x %d matrix:\n", r, c);
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter row number (0 to %d): ",r-1);
    scanf("%d", &rowChoice);
    printf("Enter column number (0 to %d): ",c-1);
    scanf("%d", &colChoice);

    for(int j=0;j<c;j++) {
        sumRow += a[rowChoice][j];
    }

    for(int i=0;i<r;i++) {
        sumCol += a[i][colChoice];
    }

    printf("\nSum of row %d = %d\n", rowChoice, sumRow);
    printf("Sum of column %d = %d\n", colChoice, sumCol);

    return 0;
}
