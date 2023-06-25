// Write a code in c where user will enter one array of its defined size and user will search for number which is in that array which can be found by sum of two array values. Write all combination and after that tell how many combination can be formed.
// Example: 4 3 2 5 1
// search no: 7
// 4 3
// 5 2
// Total number of pairs are 2
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int search,i,j,size,count;
        printf("enter search no: ");
    scanf("%d",&search);
    printf("enter size: ");
    scanf("%d",&size);
    int a[size];
    int b[size];
    count=0;

    
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

for(i=0;i<size;i++)
for(j=0;j<size;j++)
{if(i==j)
++j;
if(a[i]+a[j]==search && b[i]+b[j]!=search)
{
b[j]=a[i];
b[i]=a[j];
count++;
printf("%d  %d\n",a[i],a[j]);
}
}
printf("Total number of pairs are %d\n",count);
    return 0;
}
