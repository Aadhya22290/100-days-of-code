//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp;
    gets(str1);
    gets(str2);

    if(strlen(str1)!=strlen(str2)) {
        printf("Not Anagrams");
        return 0;
    }

    int n=strlen(str1);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(str1[i]>str1[j]){
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
            if(str2[i]>str2[j]){
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }

    if(strcmp(str1,str2)==0)
        printf("Anagrams");
    else
        printf("Not Anagrams");

    return 0;
}