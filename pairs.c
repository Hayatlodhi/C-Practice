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

    return 0;
}
