#include<stdio.h>
int input()
{
  int n;
  printf("enter the number:\n");
  scanf("%d",&n);
    return n;
}
int prime(int n)
{
  int i,result;
  for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
        result=1;
    }
  for(i=5;i<=n/5;i++)
    {
      if(n%i==0)
      result=0;
    }
  return result;
}
int output(int result)
{
  if(result==1)
  {
    printf("entred number is not prime number:\n");
  }
  else if(result==0)
  {
    printf("entred number is not a prime number:\n");
  }
  else
  {
    printf("entred number is a prime prime number:\n");
  }
}
int main()
{
  int result,n;
  n=input();
  result=prime(n);
  output(result);
  return 0;
}