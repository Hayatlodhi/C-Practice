#include <stdio.h>
 int pov(int no,int po)
 {  
     int i,rzlt;
     rzlt=no;
     for(i=1;i<po;i++)
     rzlt=no*rzlt;
     return rzlt;
 }

int main()
{
  int a,b,len,no;
  printf("Enter the number u want to check: ");
  scanf("%d",&no);
  a=b=no;
  int newa=0;
  while(b!=0)
  {
      b/=10;
      len++;
  }
   int arr_size=len-1;
  int arr[arr_size];
  int i=0;
  int rem;
  while(a!=0)
  {
      rem=a%10;
      a/=10;
      arr[i]=rem;
      i++;
  }
  for(i=0;i<len;i++)
  {
      newa=newa+pov(arr[i],len);
  }
  if(newa==no)
  printf("number is armstrong");
  else 
  printf("number is not armstrong");
}
 
