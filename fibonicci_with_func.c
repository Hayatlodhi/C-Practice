/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int fibo1(int fibo[],int n,int first,int second)
{
    int temp,i;
    for(i=0;i<=10; i++)
    {
        fibo[i] = first + second;
        temp=first;
        first=second;
        second = fibo[i];
    }
}

int main()
{
    int second,first,n,i;
    printf("enter the range of number you want to generate:");
    scanf("%d",&n);
    printf("enter the fibonic series 1st number:");
    scanf("%d",&first);
    printf("enter the fibonic series 2nd number:");
    scanf("%d",&second);
    
    int fibo[n];
    fibo1(fibo,n,first,second);
    for(i=0;i<=n; i++)
    {
        printf("%d ",fibo[i]);
    }

    
}
