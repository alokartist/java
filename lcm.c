#include <stdio.h>
int main() {
    int num1, num2, maxNum;
    printf("Program to find LCM of two numbers\n");
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    maxNum = (num1 > num2) ? num1 : num2;
    while (1) {
        if (maxNum % num1 == 0 && maxNum % num2 == 0) {
            printf("The LCM of %d and %d is %d.", num1, num2, maxNum);
            break;
        }
        ++maxNum;
    }
    return 0;
}