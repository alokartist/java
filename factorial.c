#include<stdio.h>
long long fact(int num){
  if (num == 0)
    return 1;
  else
    return(num * fact(num-1));
}
int main()
{
 int i,num,factorial=1;
 printf("Enter a whole number to find Factorial = ");
 scanf("%d",&num);
  printf("Factorial of %d is: %llu",num,fact(num));
return 0;
}