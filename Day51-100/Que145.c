//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  
}

int main() {
    int n = 3;   
    struct Student s[3];
    scanf("%s %d %d", s[0].name, &s[0].roll, &s[0].marks);
    scanf("%s %d %d", s[1].name, &s[1].roll, &s[1].marks);
    scanf("%s %d %d", s[2].name, &s[2].roll, &s[2].marks);
    struct Student top = getTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d",top.name, top.roll, top.marks);
    return 0;
}