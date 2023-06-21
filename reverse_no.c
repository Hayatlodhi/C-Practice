#include <stdio.h>
 int pov(int no,int po)
 {  
     int i,rzlt;
     rzlt=1;
     
     for(i=0;i<po;i++)
     rzlt*=no;
     return rzlt;
 }
 
int main()
{
  
  int number,dup1,dup,reverse,len,i;
  number =152;
  len=0;
  reverse=0;
  dup=dup1=number;
  while(dup1!=0)
  {
      dup1/=10;
      len++;
  }
  while(dup>0)
  {
      
     reverse=(dup%10)*pov(10,len-1)+reverse;
      dup/=10;
    
      len--;
  }
  printf("%d\n",reverse);
}
 
