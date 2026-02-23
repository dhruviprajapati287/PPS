#include<stdio.h>
int main()
{
    float maths,pps,etc,bee,fai;
    
    printf("enter marks of maths\n:");
    scanf("%f",&maths); 
    while(maths<0 || maths>100)
    {
        printf("please enter valid marks\n");
        printf("enter marks of maths\n:");
        scanf("%f",&maths);
    }
   printf("enter marks of pps:\n");
    scanf("%f",&pps);
    while(pps <0 || pps >100)
    {
    printf("please enter valid marks\n");
    printf("enter marks of pps:\n");
    scanf("%f",&pps);
    }
    printf("enter marks of etc:\n");
    scanf("%f",&etc);
    while(etc <0 || etc>100)
    {
        
        printf("please enter valid marks\n");
        printf("enter marks of etc:\n");
        scanf("%f",&etc);
    }
    
    printf("enter marks of bee:\n");
    scanf("%f",&bee);
    while(bee <0 || bee >100)
    {
      printf("please enter valid marks\n");
      printf("enter marks of bee:\n");
      scanf("%f",&bee);
    }
    printf("enter marks of fai:ln");
    scanf("%f",&fai);
    while(fai<0 || fai>100)
    {
      printf("please enter valid marks"); 
      printf("enter marks of fai:\n");
       scanf("%f",&fai);
       
       float total = maths+pps+etc+bee+fai;
       float percentage =total/5;
       printf("total marks=%f\n",total);
       printf("percentage =%f\n",percentage);
       
       if(percentage >=90)
       {
           printf("grade A\n");
       }
       else if(percentage >= 75)
       {
           printf("grade B\n");
       }
       else if(percentage >=60)
       {
           printf("grade C\n");
       }
       else if(percentage>=40)
       {
           printf("grade D\n");
       }
       else
       {
           printf("fail");
       }
       return 0;
    }
    
}
