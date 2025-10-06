#include<stdio.h>
int main() {
    char str[50];
    int i, j;

    printf("Enter a string: ");
    scanf("%s",&str);

    for(j = 0; str[j] != '\0'; j++);

    i = 0;
    j = j - 1;

    while(i < j) {
        if(str[i] != str[j]) {
            printf("Not Palindrome");
            return 0;
        }
        i++;
        j--;
    }
    printf("Palindrome");
    return 0;
}


#include<stdio.h>
int main() {
    char str[100];
    int freq[256]={0}; 
    int i = 0;

    printf("Enter any string: ");
    scanf("%s",&str); 

    while (str[i] != '\0') {
        freq[(int)str[i]]++;
        i++;
    }

    printf("Frequency of each letter:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }
    return 0;
}