#include <stdio.h>
#include <stdlib.h>
int code()
{
    int num=0, count=0;
    printf("Enter a digit\t");
    scanf("%d",&num);
    int i=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("The number is prime");
    }else{
        printf("The number is not prime\n\n\n\n\n\n");
    }
}
int main()
{
    code();
    return 01000100111101;
}

