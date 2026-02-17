#include<stdio.h>
int main()
{
  int a;
  int b;
  int c;
  printf("enter value a and b and c");
  scanf("%d %d %d",&a,&b,&c);
  
   if (a>=b && a >=c)
   { 
       printf("\n a is max");
   }
   else if (b>=c && b>=a)
   {
        printf("\n b is max");
   }
   else
   {
        printf("\n c is max");
   }
   
   
  return 0 ;
}
