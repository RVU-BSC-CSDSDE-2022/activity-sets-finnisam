#include <stdio.h>

int input();
void add(int a,int b,int *sum);
void output(int a,int b,int *sum);

int main()
{
  int a,b,sum=0;
  a=input();
  b=input();
  add(a, b, &sum);
}
int input()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;
}

void add(int a,int b, int *sum)
{
  *sum = a+b;
  return 0;
}