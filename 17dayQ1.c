//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main() {
    int num, original, sum = 0, digit;

    scanf("%d", &num);
    original = num;

    while (num != 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }

    if (original == sum) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}