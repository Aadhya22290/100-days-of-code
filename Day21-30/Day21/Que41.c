//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main (){
    int num, firstDigit, lastDigit, digits=0, tempNum, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    tempNum = num;
    lastDigit = num % 10;
    while (tempNum >= 10){
        tempNum /= 10;
        digits++;
    }
    firstDigit = tempNum;
    swappedNum = lastDigit;
    swappedNum *= pow(10, digits);
    swappedNum += (num % (int)pow(10, digits)) - lastDigit; //swapped number = lastDigit * 10^digits + middle part of number
    swappedNum += firstDigit;
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}
