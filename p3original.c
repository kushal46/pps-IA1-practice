#include<stdio.h>

int input_n()
{
  int n;
  printf("Enter The Number\n");
  scanf("%d",&n);
  return n;
}


int sum_n(int n)
{
  int sum=0,i;

  for (i=0; i<n; i++)
  {
    sum = sum + i;
  }
  return sum;
}

void output(int n,int sum)
{
printf("The sum of %d numbers is %d\n",n,sum);
}

int main()
{ int n,sum;
  n = input_n();
  sum = sum_n(n);
  output(n,sum);
  return 0;
}