#include <stdio.h>

int main()
{
    int number,i,flag;
    flag=0;
    printf("enter the number you want to check:");
    scanf("%d",&number);
    for(i=2;i<number; i++)
    {
        
       if(number%i==0)
       {
        flag=1;
        break;
       }
       else
        flag=0;
    }
if(number==0)
flag=1;
if(flag==1)
printf("%d is not prime number.",number);
else
printf("%d is prime number.",number);

    
}
