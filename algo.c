#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n, x, y, z, u, i;
  printf("donner le nombre de N superieur a 2\n");
  scanf("%d",&n);
  x=0; y=1; z=2;
  for(i=3;i<=n;i++)
  {
      u=2*z+3*x; 
      x=y; 
      y=z;
      z=u;
  }
  if(n==0)
  {
      u=0;
  }
  else if(n==1)
  {
      u=1;
  }
  else if(n==2)
  {
      u=2;
  }
  printf("U%d= %d\n",n, u);
  return 0;
}