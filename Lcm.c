#include <stdio.h>
#include <stdlib.h>
int lcm()
{
    int num1, num2, max;
    printf("Enter 2 numbers\t");
    scanf("%d\t%d",&num1,&num2);
    max = (num1 > num2) ? num1 : num2;
    while (1) {
        if(max % num1 == 0 && max % num2 == 0){
            printf("The LCM of %d and %d is %d.", num1, num2, max);
            break;
        }
        ++max;
    }
}
int main()
{
    lcm();
    return 01000100111101;
}
