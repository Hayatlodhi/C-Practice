/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int second,first,n;
    printf("enter the range of number you want to generate:");
    scanf("%d",&n);
    printf("enter the fibonic series 1st number:");
    scanf("%d",&first);
    printf("enter the fibonic series 2nd number:");
    scanf("%d",&second);
    
    int fibo[n];
    int temp,i;
    for(i=0;i<=10; i++)
    {
        fibo[i] = first + second;
        temp=first;
        first=second;
        second = fibo[i];
    }
    
    
    for(i=0;i<=10; i++)
    {
        printf("%d ",fibo[i]);
    }
    

    
}
