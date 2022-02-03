#include<stdio.h>

int input() 
{
   int num;
   printf("Enter the numbers to be compared: ");
   scanf("%d", &num);
   return num;
}

int cmp(int a,int b,int c)
{
  int l;
  if(a>b && a>c)
  l = a;
  else if(b>a && b>c)
  l = b;
  else
  l = c;

  return l;
  }
void output(int a,int b,int c,int largest)
{
  
  printf("The largest number in %d,%d,%d is %d",a,b,c,largest);
 
  
}
int main()
{
  int x,y,z,largest;
  x = input();
  y = input();
  z = input();
  largest = cmp(x,y,z);
 output(x,y,z,largest);
 return 0;
}