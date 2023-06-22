// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int number,count;
    printf("enter the number you want to check number of bits");
    scanf("%d",&number);
    if(number==0)
    count=1;
    while(number!=0)
    {
        number/=2;
        count++;
    }
    printf("%d",count);
    return 0;
}
