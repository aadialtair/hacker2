#include<stdio.h>
int main()
{
   int x,y;
   printf("X:");
   scanf("%d",&x);
   printf("Y:");
   scanf("%d",&y);
   //x^=y^=x^=y;
   x=x+y;
   y=x-y;
   x=x-y;
   printf("X: %d\n",x);
   printf("Y: %d\n",y);
   return 0;
}
   
