#include <stdio.h>
int main()
{
    double arr[] = {11, 22, 33, 44, 55, 66};
    //You can enter any values and check what is the string of the entered array
    //eg:- {1,2,3,4},{2,3,4},{9,10,11,11}
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    printf("Size of the array is: %d\n", n);
    return 0;
}
