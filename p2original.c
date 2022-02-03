#include<stdio.h>

int input()

{ 
  int num;
  printf("enter the number to be compared: \n");
  scanf("%d",&num);
  return num;
}


int cmp(int a,int b,int c)

{
   
  if(a>b && a>c)
   return 0;
  else if(b>a && b>c)
   return 1;
  else
   return 2;
}


void output(int a,int b,int c,int largest)

{
  if(largest == 0)
  printf("The largest of %d,%d,%d is %d",a,b,c,a);
  else if(largest == 1)
  printf("The largest of %d,%d,%d is %d",a,b,c,b);
  else
  printf("The largest of %d,%d,%d is %d",a,b,c,c);
}


int main()
{ int x,y,z,largest;
  x = input();
  y = input();
  z = input();
  largest = cmp(x,y,z);
  output(x,y,z,largest);
  return 0;
}
